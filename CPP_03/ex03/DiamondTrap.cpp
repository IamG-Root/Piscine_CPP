/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:39:46 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 11:02:57 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
    this->_name = "";
    ClapTrap::_name = this->_name + "_clap_name";
    this->_hp = FragTrap::_hp;
    this->_ep = ScavTrap::_ep;
    this->_admg = FragTrap::_admg;
    std::cout<<"DiamondTrap spawned"<<std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
    ClapTrap::_name = name + "_clap_name";
    this->_name = name;
    this->_hp = FragTrap::_hp;
    this->_ep = ScavTrap::_ep;
    this->_admg = FragTrap::_admg;
    std::cout<<this->_name<<" DiamondTrap spawned"<<std::endl;
    return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap( src ), ScavTrap( src ), FragTrap( src )
{
    *this = src;
    std::cout<<src._name<<" DiamondTrap spawned"<<std::endl;
    return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src)
{
    this->_name = src._name;
    this->_hp = src._hp;
    this->_ep = src._ep;
    this->_admg = src._admg;
    std::cout<<"Copy assignment operator called on DiamondTrap"<<std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout<<this->_name<<" DiamondTrap has been destroyed"<<std::endl;
    return ;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
    return;
}

void DiamondTrap::whoAmI()
{
    std::cout<<"My ClapTrapName: "<<ClapTrap::_name<<" and my DiamondTrap name: "<<this->_name<<std::endl;
}