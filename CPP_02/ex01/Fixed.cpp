/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:48:11 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/08 15:57:53 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    std::cout<<"Default constructor called"<<std::endl;
    _value = 0;
}

Fixed::Fixed( Fixed const & fixed )
{
    // If you put this instead of the line below it calls the copy operator function, so you'll visualize the proper message Copy assignment...
    std::cout<<"Copy constructor called"<<std::endl;
    *this = fixed;
    //this->_value = fixed._value;
}

Fixed::Fixed( const int value )
{
    std::cout<<"Int constructor called"<<std::endl;
    _value = value << _bits;
}

Fixed::Fixed( const float value )
{ 
    std::cout<<"Float constructor called"<<std::endl;
    _value = roundf(value * (1 << _bits));
}

Fixed::~Fixed( void )
{
    std::cout<<"Destructor called"<<std::endl;
}

Fixed &Fixed::operator = (Fixed const &fixed)
{
    std::cout<<"Copy assignement operator called"<<std::endl;
    this->_value = fixed.getRawBits();
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    _value = raw;
}

int Fixed::getRawBits( void ) const
{
    //std::cout<<"getRawBits member function called"<<std::endl;
    return (_value);
}

int Fixed::toInt( void ) const
{
    return (roundf(this->getRawBits() >> _bits));
}

float Fixed::toFloat( void ) const
{
    return ((float) this->getRawBits() / (1 << _bits));
}

std::ostream & operator<<(std::ostream & out, Fixed const & fixed)
{
    out << fixed.toFloat();
    return (out);
}