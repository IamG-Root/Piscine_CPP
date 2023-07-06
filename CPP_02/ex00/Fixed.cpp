/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:48:11 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/06 18:39:45 by scastagn         ###   ########.fr       */
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
    //*this = fixed;
    this->_value = fixed._value;
    std::cout<<"Copy constructor called"<<std::endl;
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
    std::cout<<"getRawBits member function called"<<std::endl;
    return (_value);
}