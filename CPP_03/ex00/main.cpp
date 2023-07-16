/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:35:04 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/16 18:59:02 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap bot1 = ClapTrap("Thanos");
    ClapTrap bot2 = ClapTrap("IronMan");

    bot1.attack(bot2.getName());
    bot2.takeDamage(bot1.getAdmg());
    bot2.beRepaired(bot1.getAdmg());
    bot2.attack(bot1.getName());
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