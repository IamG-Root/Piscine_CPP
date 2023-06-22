/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:54:10 by scastagn          #+#    #+#             */
/*   Updated: 2023/06/22 13:25:28 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
    public:

        Contact(void);
        ~Contact(void);
        void SetFirstName(std::string str);
        void SetLastName(std::string str);
        void SetNickName(std::string str);
        void SetPhoneNumber(std::string str);
        void SetDarkestSecret(std::string str);
        std::string GetFirstName(void);
        std::string GetLastName(void);
        std::string GetNickName(void);
        std::string GetPhoneNumber(void);
        std::string GetDarkestSecret(void);
    
    private:

        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
};

#endif