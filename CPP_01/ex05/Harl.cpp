/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:57:14 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/05 22:31:19 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    return ;
}

Harl::~Harl()
{
    return ;
}

void    Harl::debug()
{
    std::cout<<DEBUG<<std::endl;
    return ;
}

void    Harl::info()
{
    std::cout<<INFO<<std::endl;
    return ;
}

void    Harl::warning()
{
    std::cout<<WARNING<<std::endl;
    return ;
}

void    Harl::error()
{
    std::cout<<ERROR<<std::endl;
    return ;
}

void    Harl::complain( std::string level )
{
    //Declare a pointer containing all the pointers to member functions of Harl.
    void (Harl::* harlf[4]) (void)= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; 
    //Declare a pointer to string containing all levels to compare with the one received as parameter.
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++)
        if (levels[i] == level)
            (this->*(harlf[i]))();
    return ;
}