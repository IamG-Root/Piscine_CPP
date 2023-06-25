/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:09:21 by scastagn          #+#    #+#             */
/*   Updated: 2023/06/25 22:04:42 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
    std::string     operation;
    int             contacts;
    PhoneBook       phone;

    contacts = 0;
    phone.last = 0;
    std::cout<<"SELECT OPERATION:\nADD: Save new contact\nSEARCH: display a specific contact\nEXIT: Quit"<<std::endl<<std::endl;
    while (1)
    {
        std::cout<<"\nENTER OPERATION >> ";
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
            phone.print();
            std::cout<<"\nINSERT INDEX >> ";
            getline(std::cin, operation);
            phone.print(operation[0] - '0' - 1);
        }
        else
            std::cout<<"Invalid command."<<std::endl<<std::endl;
    }
    return 0;
}