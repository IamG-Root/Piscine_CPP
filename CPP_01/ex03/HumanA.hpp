/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 22:08:40 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/04 22:42:16 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string str, Weapon& wp);
        ~HumanA();
        void    attack();
        std::string getName();
        Weapon getWeapon();
    private:
        std::string name;
        Weapon& wpn;
};

#endif