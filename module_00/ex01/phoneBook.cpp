/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 01:52:59 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/08 21:45:33 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include"Contact.hpp"

PhoneBook::PhoneBook(){
    size = -1;
}

PhoneBook::~PhoneBook(){
}

void    PhoneBook::displayContact(int index)
{
    std::cout << "first name    : ";
    std::cout << contacts[index].getElement(1) << std::endl;
    std::cout << "last name     : ";
    std::cout << contacts[index].getElement(2) << std::endl;
    std::cout << "nick name     : ";
    std::cout << contacts[index].getElement(3) << std::endl;
    std::cout << "Phone Number  : ";
    std::cout << contacts[index].getElement(4) << std::endl;
    std::cout << "darkest secret: ";
    std::cout << contacts[index].getElement(5) << std::endl;
}

void    PhoneBook::displayList(){
    int i;

    i = 0;
    while (i <= size)
    {
        std::cout << "         "<< i << "|";
        renderStr(contacts[i].getElement(1));
        renderStr(contacts[i].getElement(2));
        renderStr(contacts[i].getElement(3));
        std::cout << std::endl;
        i++;
    }
}

void    PhoneBook::search()
{
    std::string tmp;
    int         c;

    if (size >= 0)
    {
        displayList();
        while (1)
        {
            std::cout << "Choose an index: ";
            getline(std::cin, tmp);
            if (std::cin.eof())
            {
                puts("\nEXIT");
                exit (0);
            }
            if (tmp.length() > 0)
            {
                if (!all_isdigit(tmp))
                {
                    puts("Choice must countain only digits");
                    continue;
                }
                c = std::stoi(tmp);
                if (c >= 0 && c <= 8)
                {
                    tmp.erase();
                    tmp = contacts[c].getElement(1);
                    if (tmp.length() <= 0)
                    {
                        puts("Contact doesn't exist");
                        continue;
                    }
                    displayContact(c);
                    break;
                }
                else
                    puts("Undefined behavior");
            }
        }
    }
}

void    PhoneBook::add()
{
    int i;

    i = 0;
    size++;
    if (size == 8)
    {
        contacts[i].removeContact();
        while (i < 7)
        {
            contacts[i] = contacts[i + 1]; 
            i++;
        }
        size--;
    }
    contacts[size].insertFirstName();
    contacts[size].insertLastName();
    contacts[size].insertNickName();
    contacts[size].insertPhoneNumber();
    contacts[size].insertDarkestSecret();
}
