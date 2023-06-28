/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:07:19 by scastagn          #+#    #+#             */
/*   Updated: 2023/06/28 09:59:26 by scastagn         ###   ########.fr       */
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
    std::string value;

    std::cout<<"\nINSERT FIRST NAME >> ";
    getline(std::cin, value);
    this->contacts[index].SetFirstName(value);
    std::cout<<"\nINSERT LAST NAME >> ";
    getline(std::cin, value);
    this->contacts[index].SetLastName(value);
    std::cout<<"\nINSERT NICK NAME >> ";
    getline(std::cin, value);
    this->contacts[index].SetNickName(value);
    std::cout<<"\nINSERT PHONE NUMBER >> ";
    getline(std::cin, value);
    this->contacts[index].SetPhoneNumber(value);
    std::cout<<"\nINSERT DARKEST SECRET >> ";
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

void PhoneBook::print(int index)
{
    if (index >= this->length() || index < 0)
    {
        std::cout<<"Invalid index!"<<std::endl;
        return ;
    }
    std::cout<<std::endl;
    std::cout<<"First name: "<<this->contacts[index].GetFirstName()<<std::endl;
    std::cout<<"Last name: "<<this->contacts[index].GetLastName()<<std::endl;
    std::cout<<"Nickname: "<<this->contacts[index].GetNickName()<<std::endl;
    std::cout<<"Phone number: "<<this->contacts[index].GetPhoneNumber()<<std::endl;
    std::cout<<"Darkest secret: "<<this->contacts[index].GetDarkestSecret()<<std::endl;
    return ;
}


