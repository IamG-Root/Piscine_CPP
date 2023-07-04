/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 22:42:58 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/04 22:55:16 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string str);
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon& wp); //Non so perchè vederla come una reference
        std::string getName();
        Weapon getWeapon();
    private:
        std::string name;
        Weapon* wpn;
};

#endif