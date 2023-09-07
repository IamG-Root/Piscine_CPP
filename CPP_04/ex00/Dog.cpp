/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:54:55 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 12:04:14 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
    this->type = "Dog";
    std::cout<<"Default Dog created"<<std::endl;
    return ;
}

Dog::Dog(const Dog &src): Animal( src )
{
    *this = src;
    std::cout<<"Copy constructor Dog created"<<std::endl;
    return ;
}

Dog::~Dog( void )
{
    std::cout<<"Dog destroyed"<<std::endl;
    return;
}

Dog &Dog::operator=(const Dog &src)
{
    this->type = src.type;
    std::cout<<"Dog assignment operator called"<<std::endl;
    return (*this);
}

void Dog::makeSound( void ) const
{
    std::cout<<"*Baow*"<<std::endl;
    return ;
}