/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:45:31 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/22 19:14:32 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    this->_name = "";
    this->_hp = 100;
    this->_ep = 50;
    this->_admg = 20;
    std::cout<<"ScavTrap spawned"<<std::endl;
    return ;
}

ScavTrap::ScavTrap( const std::string name )
{
    this->_name = name;
    this->_hp = 100;
    this->_ep = 50;
    this->_admg = 20;
    std::cout<<this->_name<<" ScavTrap spawned"<<std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap( src )
{
    std::cout<<src._name<<" ScavTrap spawned"<<std::endl;
    *this = src;
    return ;
}

ScavTrap & ScavTrap::operator =(const ScavTrap & src)
{
    this->_name = src._name;
    this->_hp = src._hp;
    this->_ep = src._ep;
    this->_admg = src._admg;
    std::cout<<"Copy assignment operator called on ScavTrap"<<std::endl;
    return (*this);
}

ScavTrap::~ScavTrap( void )
{
    std::cout<<this->_name<<" ScavTrap has been destroyed"<<std::endl;
    return ;
}

void ScavTrap::attack(const std::string & target)
{
    if (this->_ep > 0)
    {
        std::cout<<"ScavTrap "<<this->_name<<" attacks "<<target<<" causing "<<this->_admg<<" points of damage!"<<std::endl;
        this->_ep -= 1;
    }
    else
        std::cout<<"ScavTrap "<<this->_name<<" has no more energy points to attack!"<<std::endl;
    return ;
}

void ScavTrap::guardGate( void )
{
    std::cout<<this->_name<<" ScavTrap is in Gate keeper mode!"<<std::endl;
    return ;
}