/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:19:47 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/16 18:55:41 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
    std::cout<<"ClapTrap spawned"<<std::endl;
    this->_name = "";
    this->_hp = 10;
    this->_ep = 10;
    this->_admg = 0;
    return ;
}

ClapTrap::ClapTrap(const std::string name)
{
    this->_name = name;
    this->_hp = 10;
    this->_ep = 10;
    this->_admg = 0;
    std::cout<<name<<" spawned"<<std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout<<src._name<<" spawned"<<std::endl;
    *this = src;
    return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & src)
{
    this->_name = src._name;
    this->_hp = src._hp;
    this->_ep = src._ep;
    this->_admg = src._admg;
    std::cout<<"Copy assignment operator called"<<std::endl;
    return (*this);
}

ClapTrap::~ClapTrap( void )
{
    std::cout<<this->_name<<" has been destroyed"<<std::endl;
    return ;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_ep > 0)
    {
        std::cout<<this->_name<<" attacks "<<target<<" causing "<<this->_admg<<" points of damage!"<<std::endl;
        this->_ep -= 1;
    }
    else
        std::cout<<this->_name<<" has no more energy points to attack!"<<std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<<this->_name<<" takes "<<amount<<" points of damage!"<<std::endl;
    this->_hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_ep > 0)
    {
        std::cout<<this->_name<<" repairs itself and get "<<amount<<" health point back!"<<std::endl;
        this->_hp += amount;
        this->_ep -= 1;
    }
    else
        std::cout<<this->_name<<" has no more energy points to repair itself"<<std::endl;
    return ;
}

std::string ClapTrap::getName( void )
{
    return (this->_name);
}

int ClapTrap::getHp( void )
{
    return (this->_hp);
}

int ClapTrap::getEp( void )
{
    return (this->_ep);
}

int ClapTrap::getAdmg( void )
{
    return (this->_admg);
}

