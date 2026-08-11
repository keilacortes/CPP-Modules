/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:09:02 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/08/11 18:53:45 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = other.type;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal assignment operator called" << std::endl;

    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor animal called" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "Generic animal make a sound" << std::endl;
}
