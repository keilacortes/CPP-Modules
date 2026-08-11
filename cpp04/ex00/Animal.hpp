/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:09:09 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/08/11 18:53:21 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
private:
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);

    std::string getType() const;
    virtual void makeSound() const;
    virtual ~Animal();
};

#endif
