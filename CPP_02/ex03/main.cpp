/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:54:06 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/07 22:35:48 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {

    std::cout<<"0 = external | 1 = internal"<<std::endl<<std::endl;
    
    std::cout<<"a(1,1) -- b(4,2) -- c(2,5) -- point(1,3)"<<std::endl;
    std::cout<<bsp(Point(1, 1), Point(4,2), Point(2,5), Point(1, 3))<<std::endl<<std::endl;
    
    std::cout<<"a(1,1) -- b(4,2) -- c(2,5) -- point(3,2)"<<std::endl;
    std::cout<<bsp(Point(1, 1), Point(4,2), Point(2,5), Point(3, 2))<<std::endl<<std::endl;
    
    std::cout<<"a(0,0) -- b(5,0) -- c(3,10) -- point(1,3)"<<std::endl;
    std::cout<<bsp(Point(0,0), Point(5,0), Point(3,10), Point(1, 3))<<std::endl<<std::endl;
    
    std::cout<<"a(0,0) -- b(5,0) -- c(3,10) -- point(4,6)"<<std::endl;
    std::cout<<bsp(Point(0,0), Point(5,0), Point(3,10), Point(4,6))<<std::endl<<std::endl;
    return 0;
}