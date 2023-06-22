/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:07:19 by scastagn          #+#    #+#             */
/*   Updated: 2023/06/22 14:07:23 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

void PhoneBook::add(int index)
{
    std::string value;

    std::cout<<"INSERT FIRST NAME >> ";
    getline(std::cin, value);
    this->contacts[index].SetFirstName(value);
    std::cout<<"INSERT LAST NAME >> ";
    getline(std::cin, value);
    this->contacts[index].SetLastName(value);
    std::cout<<"INSERT NICK NAME >> ";
    getline(std::cin, value);
    this->contacts[index].SetNickName(value);
    std::cout<<"INSERT PHONE NUMBER >> ";
    getline(std::cin, value);
    this->contacts[index].SetPhoneNumber(value);
    std::cout<<"INSERT DARKEST SECRET >> ";
    getline(std::cin, value);
    this->contacts[index].SetDarkestSecret(value);
}

void PhoneBook::resetlast()
{
    this->contacts[7].SetFirstName("");
    this->contacts[7].SetLastName("");
    this->contacts[7].SetNickName("");
    this->contacts[7].SetPhoneNumber("");
    this->contacts[7].SetDarkestSecret("");
}

