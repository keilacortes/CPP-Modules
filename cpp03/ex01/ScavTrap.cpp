/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:49:20 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/06/16 20:12:19 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    hitPoints_ = 100;
    energyPoints_ = 50;
    atackDamage_ = 20;

    std::cout << "ScavTrap name constructor called for " 
             << name_
             << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap assignment operator called"
              << std::endl;

    if (this != &other)
    {
        ClapTrap::operator=( other );
        name_ = other.name_;
        hitPoints_ = other.hitPoints_;
        energyPoints_ = other.energyPoints_;
        atackDamage_ = other.atackDamage_;
    }

    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" 
              << std::endl;

    name_ = other.name_;
    hitPoints_ = other.hitPoints_;
    energyPoints_ = other.energyPoints_;
    atackDamage_ = other.atackDamage_;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor called for " 
              << name_
              << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (energyPoints_ > 0 && hitPoints_ > 0)
    {
        std::cout   << "ScavTrap " << name_
                    << " attacks " << target << ", causing "
                    << atackDamage_ << " points of damage!"
                    << std::endl;
        energyPoints_--;
    }
    else
    {
        std::string message = (energyPoints_ > 0) ? "hit" : "energy";

        std::cout   << "ScavTrap " << name_
                    << " has no " << message << "points!"
                    << std::endl;
    }
}

void        ScavTrap::guardGate()
{
    std::cout   << "ScavTrap " << name_
                << " is in Gate keeper mode!" 
                << std::endl;
}
