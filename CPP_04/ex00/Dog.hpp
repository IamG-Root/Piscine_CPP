/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:47:31 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 11:59:42 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog( void );
        Dog( const Dog &src );
        ~Dog( void );
        Dog &operator=( const Dog &src );
        virtual void makeSound( void ) const;
};
#endif