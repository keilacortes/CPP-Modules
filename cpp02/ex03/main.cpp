/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 18:42:48 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/06/02 21:30:12 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(0.0f, 10.0f);

    // Dentro
    std::cout << "Dentro (5,2):      " << bsp(a, b, c, Point(5.0f, 2.0f))   << std::endl;
    std::cout << "Dentro (1,1):      " << bsp(a, b, c, Point(1.0f, 1.0f))   << std::endl;

    // Fora
    std::cout << "Fora (10,10):      " << bsp(a, b, c, Point(10.0f, 10.0f)) << std::endl;
    std::cout << "Fora (-1,5):       " << bsp(a, b, c, Point(-1.0f, 5.0f))  << std::endl;

    // Vértice
    std::cout << "Vertice (0,0):     " << bsp(a, b, c, Point(0.0f, 0.0f))   << std::endl;

    // Aresta
    std::cout << "Aresta (5,0):      " << bsp(a, b, c, Point(5.0f, 0.0f))   << std::endl;
    std::cout << "Aresta (5,5):      " << bsp(a, b, c, Point(5.0f, 5.0f))   << std::endl;

    return (0);
}
