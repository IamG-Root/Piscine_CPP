/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:15:40 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/03 22:47:17 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zb;
    zb.SetName("Aldo");
    zb.announce();
    
    Zombie *zz;
    zz = newZombie("Giovanni");
    zz->announce();

    randomChump("Giacomo");
    delete (zz);
}