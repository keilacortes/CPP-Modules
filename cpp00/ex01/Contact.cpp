/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 23:43:16 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/02 11:41:10 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first_name(std::string value)
{
    _first_name = value;
}

void Contact::set_last_name(std::string value)
{
    _last_name = value;
}

void Contact::set_nickname(std::string value)
{
    _nickname = value;
}

void Contact::set_phone_number(std::string value)
{
    _phone_number = value;
}

void Contact::set_darkest_secret(std::string value)
{
    _darkest_secret = value;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::get_first_name()
{
    return _first_name;
}

std::string Contact::get_last_name()
{
    return _last_name;
}

std::string Contact::get_nickname()
{
    return _nickname;
}

std::string Contact::get_phone_number()
{
    return _phone_number;
}

std::string Contact::get_darkest_secret()
{
    return _darkest_secret;
}
