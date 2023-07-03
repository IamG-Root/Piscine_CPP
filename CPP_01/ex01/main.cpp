/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:15:40 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/03 23:15:58 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N;
    std::string name;
    Zombie *horde_start;

    std::cout<<"Insert zombie number >>";
    std::cin>>N;
    if (N < 0)
        return (1);
    std::cout<<"Insert zombie name >>";
    std::cin>>name;
    std::cout<<std::endl;

    horde_start = zombieHorde(N, name);
    delete [] horde_start;
    return (0);
}