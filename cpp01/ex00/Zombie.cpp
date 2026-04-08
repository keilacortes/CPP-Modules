/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:14:59 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/07 22:35:18 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << get_name() << " died again" << std::endl;
}

std::string Zombie::get_name() const
{
    return _name;
}

void Zombie::announce( void )
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
