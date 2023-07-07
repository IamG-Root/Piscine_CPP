/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:38:32 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/07 22:23:43 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float d, d1, d2, coeff_a, coeff_b;

    d1 = (((point.getX() - a.getX())*(c.getY() - a.getY())) - ((point.getY() - a.getY())*(c.getX() - a.getX())));
    d2 = (((a.getX() - point.getX())*(b.getY() - a.getY())) - ((a.getY() - point.getY())*(b.getX() - a.getX())));
    d = (((b.getX() - a.getX())*(c.getY() - a.getY())) - ((b.getY() - a.getY())*(c.getX() - a.getX())));

    coeff_a = (float) d1/d;
    coeff_b = (float) d2/d;

    if ((coeff_a > 0) && (coeff_b > 0) && (coeff_a + coeff_b < 1))
        return (true);
    return (false);
}


// D1=(x-xA)(yC-yA)-(y-yA)(xC-xA)

// D2=(xA-x)(yB-yA)-(yA-y)(xB-xA)

// D=(xB-xA)(yC-yA)-(yB-yA)(xC-xA)