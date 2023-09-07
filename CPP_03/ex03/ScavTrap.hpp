/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:40:37 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/22 19:02:29 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap & src);
        ~ScavTrap();
        ScavTrap & operator=(const ScavTrap & src);
        void attack(const std::string & target);
        void guardGate();
};
#endif