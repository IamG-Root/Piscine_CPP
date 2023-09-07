/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:03:45 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 14:42:44 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        std::string ideas[100];
        Brain( void );
        Brain( const Brain &src);
        ~Brain( void );
        Brain &operator=(const Brain &src);
};
#endif