/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 02:01:15 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/19 03:05:38 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

std::string to_upper(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }
    return (str);
}

int main(void)
{
    std::string input;
    PhoneBook   PhoneBook_;

    while (1)
    {
        std::cout << "PhoneBook > ";
        std::cin >> input;
        input = to_upper(input);
        if (input.compare("ADD") == 0)
            PhoneBook_.add();
        else if (input.compare("SEARCH") == 0)
            PhoneBook_.search();
        else if (input.compare("EXIT") == 0)
        {
            /// Exit the Phonebook And destroy data;
            break;
        }
    }
    std::cout << "EXIT" << "\n";
    return (0);
}