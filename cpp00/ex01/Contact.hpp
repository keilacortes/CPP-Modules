/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 23:43:05 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/02 14:51:55 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
public:
    Contact();
    ~Contact();
    void set_first_name(std::string value);
    void set_last_name(std::string value);
    void set_nickname(std::string value);
    void set_phone_number(std::string value);
    void set_darkest_secret(std::string value);
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();
    std::string get_phone_number();
    std::string get_darkest_secret();
};

#endif