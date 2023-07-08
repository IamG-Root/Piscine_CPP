/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:23:33 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/08 16:12:19 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(const float x, const float y);
        Point(Point const &pt);
        Point &operator=(Point const & pt);
        ~Point();
        float getX() const;
        float getY() const;
        Fixed const &GetY() const;
        Fixed const &GetX() const;
    private:
        Fixed const _x;
        Fixed const _y;
};
#endif