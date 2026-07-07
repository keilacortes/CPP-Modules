/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:48:01 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/07/07 15:55:14 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap( const std::string& name ) : ClapTrap( name )
{
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDamage_ = 30;

	std::cout	<< "FragTrap constructor called for " 
				<< name
				<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout	<< "FragTrap default destructor called for " 
				<< name_
				<< std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap( other )
{
	std::cout	<< "FragTrap copy constructor called" 
				<< std::endl;

	this->name_ = other.name_;
	this->hitPoints_ = other.hitPoints_;
	this->energyPoints_ = other.energyPoints_;
	this->attackDamage_ = other.attackDamage_;
}

FragTrap&	FragTrap::operator=( const FragTrap& other )
{
	std::cout	<< "FragTrap assignment operator called" 
				<< std::endl;
	
	if (this != &other)
	{
		ClapTrap::operator=( other );
		this->name_ = other.name_;
		this->hitPoints_ = other.hitPoints_;
		this->energyPoints_ = other.energyPoints_;
		this->attackDamage_ = other.attackDamage_;
	}
	return (*this);
}

void		FragTrap::attack(const std::string& target)
{
	if (energyPoints_ > 0 && hitPoints_ > 0)
	{
		std::cout	<< "FragTrap " << name_
					<< " attacks " << target << ", causing "
					<< attackDamage_ << " points of damage!"
					<< std::endl;
		energyPoints_--;
	}
	else
	{
		std::cout	<< "FragTrap " << name_
					<< " has no energy points, try again! " 
					<< std::endl;
	}
}

void		FragTrap::highFivesGuys( void )
{
	std::cout	<< "FragTrap " << name_
				<< " requests positive high-fives from group!" 
				<< std::endl;
}
