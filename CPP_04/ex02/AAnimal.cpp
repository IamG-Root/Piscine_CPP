/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:25:17 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 15:03:42 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal &AAnimal::operator=(AAnimal const & src)
{
    this->type = src.type;
    std::cout<<"Copy assignment operator called on AAnimal"<<std::endl;
    return (*this);
}

AAnimal::~AAnimal( void )
{
    std::cout<<"AAnimal destroyed"<<std::endl;
    return ;
}

std::string AAnimal::getType( void ) const
{
    return this->type;
}

void AAnimal::makeSound( void ) const
{
    std::cout<<"*Default AAnimal sound*"<<std::endl;
    return ;
}