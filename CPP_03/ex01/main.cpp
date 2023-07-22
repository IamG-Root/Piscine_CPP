/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:35:04 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/22 18:58:27 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap bot1 = ClapTrap("Thanos");
    ScavTrap bot2 = ScavTrap("IronMan");

    bot1.attack(bot2.getName());
    bot2.takeDamage(bot1.getAdmg());
    bot2.beRepaired(bot1.getAdmg());
    bot2.attack(bot1.getName());
    bot2.guardGate();
    bot1.takeDamage(10);
    bot1.beRepaired(10);
    bot1.attack(bot2.getName());
    bot1.attack(bot2.getName());
    bot1.attack(bot2.getName());
    bot1.attack(bot2.getName());
    bot1.attack(bot2.getName());
    bot1.attack(bot2.getName());
    bot1.attack(bot2.getName());
    bot1.attack(bot2.getName());
    bot1.attack(bot2.getName());
    return (0);
}