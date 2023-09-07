/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:11:36 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 12:21:42 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat( void );
        WrongCat( const WrongCat &src );
        virtual ~WrongCat( void );
        WrongCat &operator=( const WrongCat &src );
        virtual void makeSound( void ) const;
};
#endif