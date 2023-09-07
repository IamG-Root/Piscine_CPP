/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:24:35 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 10:57:10 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap( void );
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap & src);
        ~DiamondTrap( void );
        DiamondTrap & operator=(const DiamondTrap & src);
        void whoAmI();
        void attack(const std::string & target);
};
#endif