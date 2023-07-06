/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:39:56 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/06 16:10:44 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed( void );
        Fixed(const Fixed &fixed);
        ~Fixed( void );
        Fixed &operator = (const Fixed &fixed);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
    private:
        int _value;
        static const int _bits = 8;
};
#endif