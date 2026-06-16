/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 21:10:21 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/06/02 21:29:35 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed crossProduct(Point const a, Point const b, Point const p)
{
    return ((b.getX() - a.getX()) * (p.getY() - a.getY()))
         - ((b.getY() - a.getY()) * (p.getX() - a.getX()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed d1 = crossProduct(a, b, point);
    Fixed d2 = crossProduct(b, c, point);
    Fixed d3 = crossProduct(c, a, point);

    if (d1 == Fixed(0) || d2 == Fixed(0) || d3 == Fixed(0))
        return (false);

    bool allPositive = (d1 > Fixed(0)) && (d2 > Fixed(0)) && (d3 > Fixed(0));
    bool allNegative = (d1 < Fixed(0)) && (d2 < Fixed(0)) && (d3 < Fixed(0));

    return (allPositive || allNegative);
}
