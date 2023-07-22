/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:35:04 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/22 21:01:53 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap bot1 = ClapTrap("Thanos");
    ScavTrap bot2 = ScavTrap("IronMan");
    FragTrap bot3 = FragTrap("Captain America");

    bot1.attack(bot2.getName());
    bot1.takeDamage(1);
    bot1.beRepaired(1);

    bot2.attack(bot3.getName());
    bot2.takeDamage(1);
    bot2.beRepaired(1);
    bot2.guardGate();

    bot3.highFivesGuys();
    bot3.attack(bot1.getName());
    bot3.takeDamage(1);
    bot3.beRepaired(1);
    
    return (0);
}