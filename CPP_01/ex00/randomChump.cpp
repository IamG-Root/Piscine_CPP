/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:44:29 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/03 22:45:54 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump (std::string name)
{
    Zombie *zmb;

    zmb = newZombie(name);
    zmb->announce();
    delete (zmb);
}