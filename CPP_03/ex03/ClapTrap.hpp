/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:11:18 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/22 19:05:47 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int _hp;
        int _ep;
        int _admg;
    public:
        ClapTrap( void );
        ~ClapTrap( void );
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap & src);
        ClapTrap & operator =(const ClapTrap & src);
        void attack(const std::string & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName( void );
        int getHp( void );
        int getEp( void );
        int getAdmg( void );
};
#endif