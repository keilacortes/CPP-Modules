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

Dog::Dog() : brain(new Brain())
{
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;

    if (this == &other)
        return *this;
    Animal::operator=(other);
    *brain = *other.brain;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
    delete brain;
}

Brain *Dog::getBrain()
{
    return brain;
}

const Brain *Dog::getBrain() const
{
    return brain;
}

void Dog::makeSound() const
{
    std::cout << "woof" << std::endl;
}
