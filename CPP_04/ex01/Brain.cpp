/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:07:39 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 14:13:46 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout<<"Default Brain created"<<std::endl;
    return ;
}

Brain::Brain(const Brain &src)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    std::cout<<"Copy constructor Brain created"<<std::endl;
    return ;
}

Brain &Brain::operator=(const Brain &src)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    std::cout<<"Assignment operator Brain called"<<std::endl;
    return (*this);
}

Brain::~Brain( void )
{
    std::cout<<"Brain destroyed"<<std::endl;
    return ;
}