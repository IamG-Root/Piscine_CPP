/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:04:36 by scastagn          #+#    #+#             */
/*   Updated: 2023/06/25 21:39:08 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
    public : 
        PhoneBook(void);
        ~PhoneBook(void);
        Contact contacts[8];
        void add(int index);
        void resetlast();
        void print();
        void print(int index);
        int length();
        std::string trunc(std::string str);
        int last;
};

#endif