/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 09:37:10 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/08 10:32:44 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
    std::cout << get_name() << " died again" << std::endl;
}

std::string Zombie::get_name() const
{
    return _name;
}

void Zombie::set_name(const std::string &name)
{
    _name = name;
}

void Zombie::announce()
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
