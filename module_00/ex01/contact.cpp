/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:55:30 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/20 00:35:26 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Contact.hpp"
#include"PhoneBook.hpp"

std::string Contact::getFirstName()
{
    return (firstName);
}

std::string Contact::getLastName()
{
    return (lastName);
}

std::string Contact::getNickName()
{
    return (nickName);
}

std::string Contact::getPhoneNumber()
{
    return (phoneNumber);
}

std::string Contact::getDarkestSecret()
{
    return (darkestSecret);
}

int Contact::insertFirstName(){
    std::string input;

    std::cout << "first name > ";
    getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "PhoneBook doesn't support empty fields" << std::endl;
        return (0);
    }
    return (1);
}

int Contact::insertLastName(){
    std::string input;

    std::cout << "last name > ";
    getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "PhoneBook doesn't support empty fields" << std::endl;
        return (0);
    }
    return (1);
}

int Contact::insertNickName(){
    std::string input;

    std::cout << "nick name > ";
    getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "PhoneBook doesn't support empty fields" << std::endl;
        return (0);
    }
    return (1);
}

int Contact::insertPhoneNumber(){
    std::string input;
    long long   number;

    std::cout << "phone nubmer > ";
    getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "PhoneBook doesn't support empty fields" << std::endl;
        return (0);
    }
    number = std::stoi(input);
    return (1);
}

int Contact::insertDarkestSecret(){
    std::string input;

    std::cout << "darkest secret > ";
    getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "PhoneBook doesn't support empty fields" << std::endl;
        return (0);
    }
    return (1);
}

