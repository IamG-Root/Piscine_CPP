/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:16:54 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 15:02:34 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        virtual ~AAnimal( void );
        AAnimal &operator =(const AAnimal &src);
        std::string getType( void ) const;
        virtual void makeSound( void ) const;
};
#endif