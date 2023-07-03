/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 23:03:10 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/03 23:13:30 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde;

    horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].SetName(name);
        horde[i].announce();
    }
    return (horde);
}