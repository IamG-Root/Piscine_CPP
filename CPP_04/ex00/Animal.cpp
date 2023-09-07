/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:25:17 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 12:17:34 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
    this->type = "Default Animal";
    std::cout<<"Animal created"<<std::endl;
    return ;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout<<"Animal created"<<std::endl;
    return ;
}

Animal::Animal(const Animal &src)
{
    *this = src;
    std::cout<<"Copy constructor Animal created"<<std::endl;
    return ;
}

Animal &Animal::operator=(Animal const & src)
{
    this->type = src.type;
    std::cout<<"Copy assignment operator called on Animal"<<std::endl;
    return (*this);
}

Animal::~Animal( void )
{
    std::cout<<"Animal destroyed"<<std::endl;
    return ;
}

std::string Animal::getType( void ) const
{
    return this->type;
}

void Animal::makeSound( void ) const
{
    std::cout<<"*Default Animal sound*"<<std::endl;
    return ;
}