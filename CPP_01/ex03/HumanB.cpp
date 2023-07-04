/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 22:43:51 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/04 22:54:48 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    name = str;
    return ;
}

HumanB::~HumanB()
{
    return ;
}

std::string HumanB::getName()
{
    return (name);
}

Weapon HumanB::getWeapon()
{
    return (*wpn);
}

void    HumanB::setWeapon(Weapon& wp)
{
    wpn = &wp;
}

void    HumanB::attack()
{
    std::cout<<this->getName()<<" attacks with "<<this->getWeapon().getType()<<std::endl;
    return ;
}