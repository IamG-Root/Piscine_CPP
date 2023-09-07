/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:42:27 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 15:04:26 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
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