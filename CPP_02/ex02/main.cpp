/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:54:06 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/06 22:15:29 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;
}
// int main( void ) {
//     Fixed a;
//     Fixed const b( 10 );
//     Fixed const c( 42.42f );
//     Fixed const d( b );

//     a = Fixed( 1234.4321f );

//     std::cout << "a is " << a << std::endl;
//     std::cout << "b is " << b << std::endl;
//     std::cout << "c is " << c << std::endl;
//     std::cout << "d is " << d << std::endl;
    
//     std::cout<<(a > b)<<std::endl;
//     std::cout<<(b > a)<<std::endl;

//     std::cout<<(a < b)<<std::endl;
//     std::cout<<(b < a)<<std::endl;

//     std::cout<<(b >= d)<<std::endl;
//     std::cout<<(b >= a)<<std::endl;

//     std::cout<<(a <= b)<<std::endl;
//     std::cout<<(b <= d)<<std::endl;

//     std::cout<<(a == b)<<std::endl;
//     std::cout<<(b == d)<<std::endl;

//     std::cout<<(a != b)<<std::endl;
//     std::cout<<(b != d)<<std::endl;

//     std::cout<<(Fixed(5.05f) * Fixed(2))<<std::endl;
//     std::cout<<(Fixed(5.05f) / Fixed(2))<<std::endl;
//     std::cout<<(Fixed(5.05f) + Fixed(2))<<std::endl;
//     std::cout<<(Fixed(5.05f) - Fixed(2))<<std::endl;

//     Fixed z;
//     std::cout<<++z<<std::endl;
//     std::cout<<z<<std::endl;
//     std::cout<<z++<<std::endl;
//     std::cout<<z<<std::endl;

//     std::cout<<--z<<std::endl;
//     std::cout<<z<<std::endl;
//     std::cout<<z--<<std::endl;
//     std::cout<<z<<std::endl;

//     std::cout<<Fixed::min(a, z)<<std::endl;
//     std::cout<<Fixed::max(a, z)<<std::endl;

//     std::cout<<Fixed::min(a, b)<<std::endl;
//     std::cout<<Fixed::max(a, b)<<std::endl;
    
//     std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//     std::cout << "b is " << b.toInt() << " as integer" << std::endl;
//     std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//     std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    
//     return 0;
// }