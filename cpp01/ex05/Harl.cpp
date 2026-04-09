/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 22:18:35 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/08 22:48:57 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug(void)
{
    std::cout << "I love getting extra bacon on my 7XL double-cheese-triple-patty-ketchup-special burger."
              << std::endl << "I really do!" << std::endl << std::endl;
}

void Harl::info(void)
{
    std::cout << "I can't believe that adding extra bacon costs extra."  << std::endl
              << "You guys didn't put enough bacon on my burger!" << std::endl
              << "If you had, I wouldn't be asking for more!" << std::endl << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve some extra bacon for free." << std::endl
              << "I’ve been coming here for years, while you only started working here last month." << std::endl << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager right now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int  i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            (this->*functions[i])();
    }
}
