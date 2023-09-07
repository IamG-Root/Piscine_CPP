/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:42:27 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 14:21:18 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    public:
        Cat( void );
        Cat( const Cat &src );
        ~Cat( void );
        Cat &operator=( const Cat &src );
        virtual void makeSound( void ) const;
        Brain *getBrain( void ) const;
    private:
        Brain *myBrain;
};
#endif