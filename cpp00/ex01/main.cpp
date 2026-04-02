/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 23:43:53 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/02 19:11:30 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void get_contact_index(PhoneBook &phonebook)
{
    std::string input;
    int         index;

    while (true)
    {
        std::cout << "Select an index to view more: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return ;
        bool is_valid = true;
        for (size_t i = 0; i < input.size(); i++)
        {
            if (!std::isdigit(input[i]))
            {
                std::cout << "Index must be a number." << std::endl;
                is_valid = false;
                break ;
            }
        }
        if (!is_valid)
            continue ;
        index = std::atoi(input.c_str());
        try
        {
            phonebook.search_contact(index);
            std::cout << std::endl;
            return ;
        }
        catch (std::runtime_error &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}

bool is_blank(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if(!std::isspace(str[i]))
            return false;
    }
    return true;
}

std::string get_input(std::string input)
{
    std::string value;
    do
    {
        std::cout << input << ": ";
        std::getline(std::cin, value);
        if (std::cin.eof())
            return value;
        else if (value.empty() || is_blank(value))
            std::cout << input << " cannot be empty, try again\n";
    } while (value.empty() || is_blank(value));
    return value;
}

void display_divisor(std::string message)
{
    std::cout << "-------------------------------\n";
    std::cout << message << std::endl;
    std::cout << "-------------------------------\n\n";
}

void display_options()
{
    std::cout << "Select an option: 'ADD', 'SEARCH' or 'EXIT'\n";
}

int main()
{
    PhoneBook phonebook = PhoneBook();
    std::string option;
    display_options();
    do
    {
        std::cout << "> ";
        std::getline(std::cin, option);
        if (option == "ADD")
        {
            std::cout << "Adding a new contact...\n";
            Contact new_contact = Contact();
            new_contact.set_first_name(get_input("First name"));
            new_contact.set_last_name(get_input("Last name"));
            new_contact.set_nickname(get_input("Nickname"));
            new_contact.set_phone_number(get_input("Phone number"));
            new_contact.set_darkest_secret(get_input("Darkest secret"));
            phonebook.add_contact(new_contact);
            display_divisor("New contact added with success!");
            display_options();
        }
        else if (option == "SEARCH")
        {
            if (phonebook.get_count() == 0)
                display_divisor("No contacts saved yet...");
            else
            {
                phonebook.show_contacts();
                get_contact_index(phonebook);
            }
            display_options();
        }
    } while (option != "EXIT");
    return 0;
}
