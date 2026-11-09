/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:09:20 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/08/11 18:28:20 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal base;
    std::cout << "Animal: ";
    base.makeSound();

    const Animal *animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    for (int i = 0; i < 4; ++i)
    {
        std::cout << animals[i]->getType() << ": ";
        animals[i]->makeSound();
    }
    for (int i = 0; i < 4; ++i)
        delete animals[i];

    WrongCat wrongCat;
    const WrongAnimal *wrong = &wrongCat;
    std::cout << wrong->getType() << " through WrongAnimal*: ";
    wrong->makeSound();
    return 0;
}
