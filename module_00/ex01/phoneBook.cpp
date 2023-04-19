/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 01:52:59 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/19 03:08:51 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

int ft_strlen(std:: string str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putnstr(std:: string str, int len)
{
    int i;

    i = 0;
    while (i <= len)
    {
        std::cout << str[i];
        i++;
    }
}

PhoneBook::PhoneBook(){
    size = 0;
}

void    PhoneBook::displayContacts(){
    int i;

    i = 0;
    while (i <= size)
    {
        std::cout << i << " | ";
        if (ft_strlen(contacts[i].getElement("firstName")) > 10)
        {
            ft_putnstr(contacts[i].getElement("firstName"), 9);
            std::cout << ".";
        }
        else
            std::cout << contacts[i].getElement("firstName");
        std::cout << " | ";
        if (ft_strlen(contacts[i].getElement("lastName")) > 10)
        {
            ft_putnstr(contacts[i].getElement("lastName"), 9);
            std::cout << ".";
        }
        else
            std::cout << contacts[i].getElement("lastName");
        std::cout << " | ";
        if (ft_strlen(contacts[i].getElement("nickName")) > 10)
        {
            ft_putnstr(contacts[i].getElement("nickName"), 9);
            std::cout << ".";
        }
        else
            std::cout << contacts[i].getElement("nickName");
        i++;
    }
}

void    PhoneBook::search()
{
    // Display contact list
    displayContacts();
    
}

void    PhoneBook::add()
{
    contacts[size].insertFirstName();
    contacts[size].insertLastName();
    contacts[size].insertNickName();
    contacts[size].insertPhoneNumber();
    contacts[size].insertDarkestSecret();
    // contacts[size].
    size++;
    if (size == 8)
        size = 0;
}
