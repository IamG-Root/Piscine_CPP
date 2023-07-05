/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:52:33 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/04 23:01:29 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    return ;
}

Weapon::Weapon(std::string str)
{
    type = str;
    return ;
}

Weapon::~Weapon()
{
    return ;
}

void    Weapon::setType(std::string str)
{
    type = str;
}

std::string& Weapon::getType()
{
    std::string &typeREF = type;
    return (typeREF);
}