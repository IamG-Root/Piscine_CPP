/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:46:36 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/22 20:59:30 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap( void );
        FragTrap( const std::string name);
        FragTrap( const FragTrap & src);
        ~FragTrap();
        FragTrap &operator=(const FragTrap & src);
        void highFivesGuys( void );
};
#endif