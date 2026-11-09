/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 18:36:01 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/08/11 18:57:00 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called" << std::endl;

    if (this == &other)
        return *this;
    Animal::operator=(other);
    *brain = *other.brain;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor cat called" << std::endl;
    delete brain;
}

Brain *Cat::getBrain()
{
    return brain;
}

const Brain *Cat::getBrain() const
{
    return brain;
}

void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}
