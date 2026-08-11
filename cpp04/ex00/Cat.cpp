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

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = other.type;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called" << std::endl;

    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor cat called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}
