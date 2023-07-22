/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:50:11 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/22 21:00:11 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    this->_name = "";
    this->_hp = 100;
    this->_ep = 100;
    this->_admg = 30;
    std::cout<<"FragTrap spawned"<<std::endl;
    return ;
}

FragTrap::FragTrap( const std::string name)
{
    this->_name = name;
    this->_hp = 100;
    this->_ep = 100;
    this->_admg = 30;
    std::cout<<this->_name<<" FragTrap spawned"<<std::endl;
    return ;
}

FragTrap::FragTrap( FragTrap const & src) : ClapTrap( src )
{
    *this = src;
    std::cout<<src._name<<" FragTrap spawned"<<std::endl;
    return ;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
    this->_name = src._name;
    this->_hp = src._hp;
    this->_ep = src._ep;
    this->_admg = src._admg;
    std::cout<<"Copy assignment operator called on FragTrap"<<std::endl;
    return (*this);
}

FragTrap::~FragTrap( void )
{
    std::cout<<this->_name<<" FragTrap has been destroyed"<<std::endl;
    return ;
}

void FragTrap::highFivesGuys( void )
{
    std::cout<<"Give me five guyz! (if you want)"<<std::endl;
    return ;
}