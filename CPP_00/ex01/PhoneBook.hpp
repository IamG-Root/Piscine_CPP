/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:04:36 by scastagn          #+#    #+#             */
/*   Updated: 2023/06/28 13:05:34 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

#define OPTIONS_MACRO "SELECT OPERATION:\nADD: Save new contact\nSEARCH: display a specific contact\nEXIT: Quit"
#define ENTER "\nENTER OPERATION >> "
#define EMPTY "Phonebook is empty!"
#define INDEX "\nINSERT INDEX >> "
#define BAD "Invalid command."
#define INV_INDEX "Invalid index!"
#define F_NAME "First name: "
#define L_NAME "Last name: "
#define N_NAME "Nickname: "
#define PHONE_NBR "Phone number: "
#define SECRET "Darkest secret: "
#define INS_F_NAME "\nINSERT FIRST NAME >> "
#define INS_L_NAME "\nINSERT LAST NAME >> "
#define INS_N_NAME "\nINSERT NICK NAME >> "
#define INS_PHONE "\nINSERT PHONE NUMBER >> "
#define INS_SECRET "\nINSERT DARKEST SECRET >> "
class PhoneBook
{
    public : 
        PhoneBook(void);
        ~PhoneBook(void);
        Contact contacts[8];
        void add(int index);
        void resetlast();
        void print();
        void print(std::string operation);
        int length();
        std::string trunc(std::string str);
        int last;
};

#endif