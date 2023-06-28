/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:07:19 by scastagn          #+#    #+#             */
/*   Updated: 2023/06/28 13:06:18 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
    int i;

    i = 0;
    while (i < 8)
        this->contacts[i++].SetValid(false);
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

void PhoneBook::add(int index)
{
    std::string value = "";

    std::cout<<INS_F_NAME;
    while(!value.length())
        getline(std::cin, value);
    this->contacts[index].SetFirstName(value);
    std::cout<<INS_L_NAME;
    value.clear();
    while(!value.length())
        getline(std::cin, value);
    this->contacts[index].SetLastName(value);
    value.clear();
    std::cout<<INS_N_NAME;
    while(!value.length())
        getline(std::cin, value);
    this->contacts[index].SetNickName(value);
    value.clear();
    std::cout<<INS_PHONE;
    while(!value.length())
        getline(std::cin, value);
    this->contacts[index].SetPhoneNumber(value);
    value.clear();
    std::cout<<INS_SECRET;
    while(!value.length())
        getline(std::cin, value);
    this->contacts[index].SetDarkestSecret(value);
    this->contacts[index].SetValid(true);
}

void PhoneBook::resetlast()
{
    this->contacts[this->last].SetFirstName("");
    this->contacts[this->last].SetLastName("");
    this->contacts[this->last].SetNickName("");
    this->contacts[this->last].SetPhoneNumber("");
    this->contacts[this->last].SetDarkestSecret("");
    this->add(this->last);
    if (this->last == 7)
        this->last = -1;
    this->last++;
}

int PhoneBook::length()
{
    int i;

    i = 0;
    while (this->contacts[i].GetValid())
        i++;
    return (i);
}

std::string PhoneBook::trunc(std::string str)
{
    if (str.length()<=10)
        return (str);
    else
        return (str.substr(0,9) + ".");
}

void PhoneBook::print()
{
    std::cout<<std::endl;
    for(int i = 0; i < this->length(); i++)
    {
        std::cout<<std::setw(10)<<i + 1;
        std::cout<<" | ";
        std::cout<<std::setw(10)<<trunc(this->contacts[i].GetFirstName());
        std::cout<<" | ";
        std::cout<<std::setw(10)<<trunc(this->contacts[i].GetLastName());
        std::cout<<" | ";
        std::cout<<std::setw(10)<<trunc(this->contacts[i].GetNickName());
        std::cout<<" | ";
        std::cout<<std::endl;
    }
}

void PhoneBook::print(std::string operation)
{
    int index;

    index = operation[0] - '0' - 1;
    if (index >= this->length() || index < 0 || operation.length() > 1)
    {
        std::cout<<INV_INDEX<<std::endl;
        return ;
    }
    std::cout<<std::endl;
    std::cout<<F_NAME<<this->contacts[index].GetFirstName()<<std::endl;
    std::cout<<L_NAME<<this->contacts[index].GetLastName()<<std::endl;
    std::cout<<N_NAME<<this->contacts[index].GetNickName()<<std::endl;
    std::cout<<PHONE_NBR<<this->contacts[index].GetPhoneNumber()<<std::endl;
    std::cout<<SECRET<<this->contacts[index].GetDarkestSecret()<<std::endl;
    return ;
}


