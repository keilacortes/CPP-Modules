/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 20:55:54 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/06/02 21:26:38 by kqueiroz         ###   ########.fr       */
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
    Point(const Point &other);
    Point &operator=(const Point &other);
    ~Point();

    Fixed getX(void) const;
    Fixed getY(void) const;

private:
    const Fixed x;
    const Fixed y;
};

#endif