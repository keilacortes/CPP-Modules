/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:13:23 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/08/11 18:56:42 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
private:
public:
    Cat();
    Cat(const Cat &other);
    ~Cat();
    Cat &operator=(const Cat &other);

    void makeSound() const;
};

#endif
