/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:49:42 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/04 22:22:02 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
    public:
        Weapon();
        Weapon(std::string str);
        ~Weapon();
        std::string& getType();
        void    setType(std::string str);
    private:
        std::string type;
};

#endif