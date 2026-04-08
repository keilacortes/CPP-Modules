/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 10:44:08 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/08 10:57:18 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;

    std::cout << &var       << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << var        << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF  << std::endl;
    return 0;
}
