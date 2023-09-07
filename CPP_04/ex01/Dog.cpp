/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:54:55 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 14:21:57 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
    this->type = "Dog";
    this->myBrain = new Brain();
    std::cout<<"Default Dog created"<<std::endl;
    return ;
}

Dog::Dog(const Dog &src): Animal( src )
{
    *this = src;
    this->myBrain = src.getBrain();
    std::cout<<"Copy constructor Dog created"<<std::endl;
    return ;
}

Dog::~Dog( void )
{
    std::cout<<"Dog destroyed"<<std::endl;
    delete myBrain;
    return;
}

Dog &Dog::operator=(const Dog &src)
{
    this->type = src.type;
    this->myBrain = src.getBrain();
    std::cout<<"Dog assignment operator called"<<std::endl;
    return (*this);
}

void Dog::makeSound( void ) const
{
    std::cout<<"*Baow*"<<std::endl;
    return ;
}

Brain *Dog::getBrain( void ) const
{
    return (this->myBrain);
}