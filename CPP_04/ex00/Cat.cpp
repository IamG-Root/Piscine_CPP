/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:48:38 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 12:04:10 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
    this->type = "Cat";
    std::cout<<"Default Cat created"<<std::endl;
    return ;
}

Cat::Cat(const Cat &src) : Animal( src )
{
    *this = src;
    std::cout<<"Copy constructor Cat created"<<std::endl;
    return ;
}

Cat::~Cat( void )
{
    std::cout<<"Cat destroyed"<<std::endl;
    return;
}

Cat &Cat::operator=(const Cat &src)
{
    this->type = src.type;
    std::cout<<"Cat assignment operator called"<<std::endl;
    return (*this);
}

void Cat::makeSound( void ) const
{
    std::cout<<"*Meow*"<<std::endl;
    return ;
}