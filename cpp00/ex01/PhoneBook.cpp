/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 23:43:32 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/02 19:12:00 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <stdexcept>

PhoneBook::PhoneBook() : _count(0), _oldest(0) {}

PhoneBook::~PhoneBook() {}

int PhoneBook::get_count()
{
    return _count;
}

void PhoneBook::add_contact(const Contact &contact)
{
    _contacts[_oldest] = contact;
    _oldest = (_oldest + 1) % 8;
    if (_count < 8)
        _count++;
}

std::string PhoneBook::truncate(std::string str)
{
    if (str.size() > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}

void PhoneBook::show_contacts()
{
    std::string sep(43, '-');

    std::cout << sep << std::endl;
    std::cout << std::right
    << std::setw(10) << "Index"
    << "|"
    << std::setw(10) << "First name"
    << "|"
    << std::setw(10) << "Last name"
    << "|"
    << std::setw(10) << "Nickname"
    << "|"
    << std::endl;
    for (int i = 0; i < _count; i++)
    {
        std::cout << std:: right
        << std::setw(10) << i
        << "|"
        << std::setw(10) << truncate(_contacts[i].get_first_name())
        << "|"
        << std::setw(10) << truncate(_contacts[i].get_last_name())
        << "|"
        << std::setw(10) << truncate(_contacts[i].get_nickname())
        << "|"
        << std::endl;
    }
    std::cout << sep << std::endl;
}

void PhoneBook::search_contact(int index)
{
    if (index < 0 || index >= _count)
        throw std::runtime_error("Invalid index");
    std::cout << std::endl;
    std::cout << "First name: " << _contacts[index].get_first_name() << std::endl;
    std::cout << "Last name: " << _contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname: " << _contacts[index].get_nickname() << std::endl;
    std::cout << "Phone number: " << _contacts[index].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << _contacts[index].get_darkest_secret() << std::endl;
}
