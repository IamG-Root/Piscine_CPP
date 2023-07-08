/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:28:30 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/08 16:15:03 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(), _y() {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point & pt)
{
    *this = pt;
    return ;
}

Point& Point::operator=(Point const & pt)
{
    (void)pt;
    return (*this);
}

Point::~Point()
{
    return ;
}

Fixed const &Point::GetX() const
{
    return (this->_x);
}

Fixed const &Point::GetY() const
{
    return (this->_y);
}

float Point::getX() const
{
    return (this->_x.toFloat());
}

float Point::getY() const
{
    return (this->_y.toFloat());
}