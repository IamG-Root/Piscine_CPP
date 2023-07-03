/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:03:04 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/03 23:01:18 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return ;
}

Zombie::~Zombie(void)
{
    std::cout<<this->GetName()<<": dead"<<std::endl;
    return ;
}

void Zombie::SetName(std::string str)
{
    name = str;
}

std::string Zombie::GetName( void )
{
    return (name);
}

void    Zombie::announce ( void )
{
    std::cout<<this->GetName()<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}