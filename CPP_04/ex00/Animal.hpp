/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:16:54 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 12:07:34 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal( void );
        Animal( std::string type);
        Animal( const Animal &src);
        virtual ~Animal( void );
        Animal &operator =(const Animal &src);
        std::string getType( void ) const;
        virtual void makeSound( void ) const;
};
#endif