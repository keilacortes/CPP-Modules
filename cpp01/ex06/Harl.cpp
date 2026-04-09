/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 10:27:45 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/09 10:56:19 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl
              << "I love getting extra bacon on my 7XL double-cheese-triple-patty-ketchup-special burger."
              << std::endl << "I really do!" << std::endl << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl
              << "I can't believe that adding extra bacon costs extra."  << std::endl
              << "You guys didn't put enough bacon on my burger!" << std::endl
              << "If you had, I wouldn't be asking for more!" << std::endl << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl
              << "I think I deserve some extra bacon for free." << std::endl
              << "I’ve been coming here for years, while you only started working here last month." << std::endl << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl
              << "This is unacceptable! I want to speak to the manager right now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
    int lvl = -1;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int  i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            lvl = i;
    }
    switch (lvl)
    {
    case 0:
        debug();
        // fallthrough
    case 1:
        info();
        // fallthrough
    case 2:
        warning();
        // fallthrough
    case 3:
        error();
        // fallthrough
        return ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
