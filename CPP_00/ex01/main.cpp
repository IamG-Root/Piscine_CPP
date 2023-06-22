/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:09:21 by scastagn          #+#    #+#             */
/*   Updated: 2023/06/22 14:09:55 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "PhoneBook.hpp"

int main()
{
    std::string     operation;
    int             contacts;
    PhoneBook       phone;

    contacts = 0;
    std::cout<<"SELECT OPERATION:\nADD: Save new contact\nSEARCH: display a specific contact\nEXIT: Quit"<<std::endl<<std::endl;
    while (1)
    {
        std::cout<<"ENTER OPERATION >> ";
        getline(std::cin, operation);
        if (!operation.compare("EXIT"))
            break ;
        else if (!operation.compare("ADD"))
        {
            if (contacts<8)
            {
                phone.add(contacts);
                contacts++;
            }
            else if (contacts >= 8)
            {
                contacts = 7;
                phone.resetlast();
                phone.add(contacts);
            }
        }
    }

    contacts = 0;
    while (contacts < 8)
    {
        std::cout<<phone.contacts[contacts].GetFirstName()<<std::endl;
        contacts++;
    }
    std::cout<<"PHONEBOOK DESTROYED"<<std::endl; 
    return 0;
}