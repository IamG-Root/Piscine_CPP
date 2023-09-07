/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:48:38 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 15:04:42 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
    this->type = "Cat";
    this->myBrain = new Brain();
    std::cout<<"Default Cat created"<<std::endl;
    return ;
}

Cat::Cat(const Cat &src) : AAnimal( src )
{
    *this = src;
    this->myBrain = src.getBrain();
    std::cout<<"Copy constructor Cat created"<<std::endl;
    return ;
}

Cat::~Cat( void )
{
    std::cout<<"Cat destroyed"<<std::endl;
    delete myBrain;
    return;
}

Cat &Cat::operator=(const Cat &src)
{
    this->type = src.type;
    this->myBrain = src.getBrain();
    std::cout<<"Cat assignment operator called"<<std::endl;
    return (*this);
}

void Cat::makeSound( void ) const
{
    std::cout<<"*Meow*"<<std::endl;
    return ;
}

Brain *Cat::getBrain( void ) const
{
    return (this->myBrain);
}