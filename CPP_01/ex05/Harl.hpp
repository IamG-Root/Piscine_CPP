/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:53:45 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/05 22:35:01 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

#define DEBUG "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define INFO "[ WARNING ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING "[ INFO ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now."

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain( std::string level );
    private:
        void debug( void );
        void info ( void );
        void warning( void );
        void error( void );
};
#endif