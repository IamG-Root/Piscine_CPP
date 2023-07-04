/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 22:11:49 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/04 22:52:45 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& wp) : wpn(wp)   //Ad oggi non so cosa significa
{
    name = str;
    return ;
}

HumanA::~HumanA()
{
    return ;
}

std::string HumanA::getName()
{
    return (name);
}

Weapon HumanA::getWeapon()
{
    return (wpn);
}

void    HumanA::attack()
{
    std::cout<<this->getName()<<" attacks with "<<this->getWeapon().getType()<<std::endl;
    return ;
}