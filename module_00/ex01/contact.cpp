/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:55:30 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/08 21:19:04 by ahammout         ###   ########.fr       */
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

void    Contact::insertFirstName()
{
    std::string input;

    while (input.empty())
    {
        std::cout << "first name > ";
        getline(std::cin, input);
        if (std::cin.eof())
        {
            puts("\nEXIT");
            exit (0);
        }
    }
    firstName = input;
}

void    Contact::insertLastName()
{
    std::string input;

    while (input.empty())
    {
        std::cout << "last name > ";
        getline(std::cin, input);
        if (std::cin.eof())
        {
            puts("\nEXIT");
            exit (0);
        }
    }
    lastName = input;
}

void    Contact::insertNickName()
{
    std::string input;
    while (input.empty())
    {
        std::cout << "nick name > ";
        getline(std::cin, input);
        if (std::cin.eof())
        {
            puts("\nEXIT");
            exit (0);
        }
    }
    nickName = input;
}

void    Contact::insertPhoneNumber()
{
    std::string input;

    while (input.empty())
    {
        std::cout << "phone nubmer > ";
        getline(std::cin, input);
        if (std::cin.eof())
        {
            puts("\nEXIT");
            exit (0);
        }
        if (!all_isdigit(input))
        {
            puts("Phone number must countain only digits");
            input.erase();
        }
    }
    phoneNumber = input;
}

void    Contact::insertDarkestSecret()
{
    std::string input;

    while (input.empty())
    {
        std::cout << "darkest secret > ";
        getline(std::cin, input);
        if (std::cin.eof())
        {
            puts("\nEXIT");
            exit (0);
        }
    }
    darkestSecret = input;
}

