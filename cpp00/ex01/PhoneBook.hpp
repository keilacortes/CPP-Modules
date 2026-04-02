/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 23:43:44 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/02 18:40:17 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact _contacts[8];
    int     _count;
    int     _oldest;
    std::string truncate(std::string str);
public:
    PhoneBook();
    ~PhoneBook();
    int get_count();
    void add_contact(const Contact &contact);
    void show_contacts();
    void search_contact(int index);
};

#endif