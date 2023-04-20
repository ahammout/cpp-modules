/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 01:52:59 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/19 23:53:45 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

PhoneBook::PhoneBook(){
    size = -1;
}

int ft_strlen(std:: string str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putnstr(std::string str, int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        std::cout << str[i];
        i++;
    }
}

void    renderStr(std::string str)
{
    int i;
    int sp;

    i = 0;
    if (ft_strlen(str) <= 10)
    {
        sp = 10 - ft_strlen(str);
        while (sp > 0)
        {
            std::cout << " ";
            sp--;
        }
        ft_putnstr(str, ft_strlen(str) + 1);
    }
    else
    {
        ft_putnstr(str, 9);
        std::cout << ".";
    }
    std::cout << "|";
}

void    PhoneBook::displayList(){
    int i;

    i = 0;
    while (i <= size)
    {
        std::cout << "         "<< i << "|";
        renderStr(contacts[i].getFirstName());
        renderStr(contacts[i].getLastName());
        renderStr(contacts[i].getNickName());
        std::cout << std::endl;
        i++;
    }
}

void    PhoneBook::displayContact(int index)
{
    std::cout << "first name    : ";
    std::cout << contacts[index].getFirstName() << std::endl;
    std::cout << "last name     : ";
    std::cout << contacts[index].getLastName() << std::endl;
    std::cout << "nick name     : ";
    std::cout << contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number  : ";
    std::cout << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "darkest secret: ";
    std::cout << contacts[index].getDarkestSecret() << std::endl;
}

void    PhoneBook::search()
{
    std::string choice;
    int         index;

    displayList();
    std::cout << "Chose the contact index: ";
    getline(std::cin, choice);
    index = std::stoi(choice);
    if (index >= 0 && index <= 8)
        displayContact(index);
    else
        std::cout << "relevant behavior" << std::endl;
    
}

void    PhoneBook::add()
{
    size++;
    contacts[size].insertFirstName();
    contacts[size].insertLastName();
    contacts[size].insertNickName();
    contacts[size].insertPhoneNumber();
    contacts[size].insertDarkestSecret();
    if (size == 7)
        size = 0;
}
