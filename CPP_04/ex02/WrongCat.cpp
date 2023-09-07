/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:12:29 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 12:13:08 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
    this->type = "WrongCat";
    std::cout<<"Default WrongCat created"<<std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal( src )
{
    *this = src;
    std::cout<<"Copy constructor WrongCat created"<<std::endl;
    return ;
}

WrongCat::~WrongCat( void )
{
    std::cout<<"WrongCat destroyed"<<std::endl;
    return;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    this->type = src.type;
    std::cout<<"WrongCat assignment operator called"<<std::endl;
    return (*this);
}

void WrongCat::makeSound( void ) const
{
    std::cout<<"*Meow*"<<std::endl;
    return ;
}