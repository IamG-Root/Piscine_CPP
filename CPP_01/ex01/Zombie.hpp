/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:05:30 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/03 23:03:58 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
    public :
        Zombie(void);
        ~Zombie(void);
        void announce (void);
        void SetName(std::string str);
        std::string GetName( void );
    private :
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);
#endif