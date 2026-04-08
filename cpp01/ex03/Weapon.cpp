/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:03:18 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/08 12:56:17 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}