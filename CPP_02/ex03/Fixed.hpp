/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:39:56 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/06 22:13:33 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed( void );
        Fixed(const Fixed &fixed);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed( void );
        Fixed &operator = (const Fixed &fixed);
        int     operator > (const Fixed &fixed) const;
        int     operator < (const Fixed &fixed) const;
        int     operator >= (const Fixed &fixed) const;
        int     operator <= (const Fixed &fixed) const;
        int     operator == (const Fixed &fixed) const;
        int     operator != (const Fixed &fixed) const;
        float   operator * (const Fixed &fixed) const;
        float   operator / (const Fixed &fixed) const;
        float   operator + (const Fixed &fixed) const;
        float   operator - (const Fixed &fixed) const;
        Fixed &operator ++ ( void );
        Fixed operator ++ ( int );
        Fixed &operator -- ( void );
        Fixed operator -- ( int );
        static Fixed &min(Fixed &first, Fixed &second);
        static const Fixed &min(Fixed const &first, Fixed const &second);
        static Fixed &max(Fixed &first, Fixed &second);
        static const Fixed &max(Fixed const &first, Fixed const &second);
        int     getRawBits( void ) const;
        int     toInt( void ) const;
        float   toFloat( void ) const;
        void    setRawBits( int const raw );
    private:
        int _value;
        static const int _bits = 8;
};

std::ostream & operator<<(std::ostream & out, Fixed const & fixed);

#endif