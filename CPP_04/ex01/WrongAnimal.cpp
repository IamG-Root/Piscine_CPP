/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:10:19 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 12:17:23 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
    this->type = "WrongAnimal";
    std::cout<<"WrongAnimal created"<<std::endl;
    return ;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout<<"WrongAnimal created"<<std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    *this = src;
    std::cout<<"Copy constructor WrongAnimal created"<<std::endl;
    return ;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & src)
{
    this->type = src.type;
    std::cout<<"Copy assignment operator called on WrongAnimal"<<std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout<<"WrongAnimal destroyed"<<std::endl;
    return ;
}

std::string WrongAnimal::getType( void ) const
{
    return this->type;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout<<"*Default WrongAnimal sound*"<<std::endl;
    return ;
}