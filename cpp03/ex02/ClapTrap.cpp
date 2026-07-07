/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 20:01:41 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/07/07 15:53:41 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name_(name),
                                        hitPoints_(10),
                                        energyPoints_(10),
                                        attackDamage_(0)
{
    std::cout << "ClapTrap name constructor called for "
              << name_
              << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->name_ = other.name_;
    this->hitPoints_ = other.hitPoints_;
    this->energyPoints_ = other.energyPoints_;
    this->attackDamage_ = other.attackDamage_;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap assignment operator called"
              << std::endl;

    if (this == &other)
        return *this;
    this->name_ = other.name_;
    this->hitPoints_ = other.hitPoints_;
    this->energyPoints_ = other.energyPoints_;
    this->attackDamage_ = other.attackDamage_;
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (energyPoints_ > 0 && hitPoints_ > 0)
    {
        std::cout << "ClapTrap " << name_
                  << " attacks " << target << ", causing "
                  << attackDamage_ << " points of damage!"
                  << std::endl;
        energyPoints_--;
    }
    else
    {
        std::string message = (energyPoints_ > 0) ? "hit" : "energy";

        std::cout << "ClapTrap " << name_
                  << " has no " << message << " points!" 
                  << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name_
              << " receives " << amount << " points of damage!"
              << std::endl;
    if (hitPoints_ - (int) amount < 0)
        hitPoints_ = 0;
    else
        hitPoints_ -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints_ > 0 && hitPoints_ > 0)
    {
        std::cout << "ClapTrap " << name_
                  << " repairs itself for "  << amount
                  << " hit points!"
                  << std::endl;
        hitPoints_ += amount;
        energyPoints_--;
    }
    else
    {
        std::string message = (energyPoints_ > 0) ? "hit" : "energy";

        std::cout << "ClapTrap " << name_
                  << " has no " << message << " points!" 
                  << std::endl;
    }
}
