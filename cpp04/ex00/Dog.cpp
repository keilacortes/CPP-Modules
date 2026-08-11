/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:09:12 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/08/11 18:57:15 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = other.type;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;

    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "meow" << std::endl;
}
