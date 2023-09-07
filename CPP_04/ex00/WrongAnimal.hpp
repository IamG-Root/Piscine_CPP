/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:09:16 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 12:21:33 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal( void );
        WrongAnimal( std::string type);
        WrongAnimal( const WrongAnimal &src);
        virtual ~WrongAnimal( void );
        WrongAnimal &operator =(const WrongAnimal &src);
        std::string getType( void ) const;
        void makeSound( void ) const;
};
#endif