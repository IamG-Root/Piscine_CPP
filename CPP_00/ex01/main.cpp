/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:09:21 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/03 21:38:17 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <csignal>
#include "PhoneBook.hpp"

int main()
{
    std::string     operation;
    int             contacts;
    PhoneBook       phone;

    contacts = 0;
    phone.last = 0;
    std::cout<<OPTIONS_MACRO<<std::endl<<std::endl;
    while (1)
    {
        std::cout<<ENTER;
        getline(std::cin, operation);
        if (!operation.compare("EXIT"))
            break ;
        else if (!operation.compare("ADD"))
        {
            if (phone.length() < 8)
            {
                phone.add(contacts);
                contacts++;
            }
            else if (contacts >= 8)
                phone.resetlast();
        }
        else if (!operation.compare("SEARCH"))
        {
            if (phone.length() < 1)
            {
                std::cout<<EMPTY<<std::endl;
                continue ;
            }
            phone.print();
            std::cout<<INDEX;
            getline(std::cin, operation);
            phone.print(operation);
        }
        else if (std::cin.eof())
            return (1);
        else
            std::cout<<BAD<<std::endl<<std::endl;
    }
    return 0;
}