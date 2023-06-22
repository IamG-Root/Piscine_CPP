/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:45:36 by scastagn          #+#    #+#             */
/*   Updated: 2023/06/22 13:31:55 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string.h>

Contact::Contact(void)
{
    // FirstName = "";
    // LastName = "";
    // NickName = "";
    // PhoneNumber = "";
    // DarkestSecret = "";
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void Contact::SetFirstName(std::string str)
{
    FirstName = str;
}

void Contact::SetLastName(std::string str)
{
    LastName = str;
}

void Contact::SetNickName(std::string str)
{
    NickName = str;
}

void Contact::SetPhoneNumber(std::string str)
{
    PhoneNumber = str;
}

void Contact::SetDarkestSecret(std::string str)
{
    DarkestSecret = str;
}

std::string Contact::GetFirstName(void)
{
    return (FirstName);
}

std::string Contact::GetLastName(void)
{
    return (LastName);
}

std::string Contact::GetNickName(void)
{
    return (NickName);
}

std::string Contact::GetPhoneNumber(void)
{
    return (PhoneNumber);
}

std::string Contact::GetDarkestSecret(void)
{
    return (DarkestSecret);
}

