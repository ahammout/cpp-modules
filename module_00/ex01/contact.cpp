/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:55:30 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/20 23:00:35 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"
#include"PhoneBook.hpp"

std::string Contact::getElement(int attr)
{
    if (attr == 1)
        return (firstName);
    if (attr == 2)
        return (lastName);
    if (attr == 3)
        return (nickName);
    if (attr == 4)
        return (phoneNumber);
    if (attr == 5)
        return (darkestSecret);
    return (0);
}

void    Contact::removeContact()
{
    if (!firstName.empty())
        firstName.erase();
    if (!lastName.empty())
        lastName.erase();
    if (!nickName.empty())
        nickName.erase();
    if (!phoneNumber.empty())
        phoneNumber.erase();
    if (!darkestSecret.empty())
        darkestSecret.erase();
}

bool    Contact::insertFirstName()
{
    std::string input;

    std::cout << "first name > ";
    getline(std::cin, input);
    if (input.empty())
        return (puts("PhoneBook doesn't support empty field"), false);
    firstName = input;
    return (true);
}

bool    Contact::insertLastName()
{
    std::string input;

    std::cout << "last name > ";
    getline(std::cin, input);
    if (input.empty())
        return (puts("PhoneBook doesn't support empty field"), false);
    lastName = input;
    return (true);
}

bool    Contact::insertNickName()
{
    std::string input;

    std::cout << "nick name > ";
    getline(std::cin, input);
    if (input.empty())
        return (puts("PhoneBook doesn't support empty field"), false);
    nickName = input;
    return (true);
}

bool    Contact::insertPhoneNumber()
{
    std::string input;

    std::cout << "phone nubmer > ";
    getline(std::cin, input);
    if (input.empty())
        return (puts("PhoneBook doesn't support empty field"), false);
    if (!all_isdigit(input))
        return (puts("Phone number must countain only digits"), false);
    phoneNumber = input;
    return (true);
}

bool    Contact::insertDarkestSecret()
{
    std::string input;

    std::cout << "darkest secret > ";
    getline(std::cin, input);
    if (input.empty())
        return (puts("PhoneBook doesn't support empty field"), false);
    darkestSecret = input;
    return (true);
}

