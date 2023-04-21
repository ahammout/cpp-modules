/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 22:05:29 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/21 00:56:07 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include"Contact.hpp"

bool    all_isdigit(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if  (!isdigit(str[i]))
            return (false);
        i++;
    }
    return (true);
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
    if (str.length() <= 10)
    {
        sp = 10 - str.length();
        while (sp > 0)
        {
            std::cout << " ";
            sp--;
        }
        ft_putnstr(str, str.length() + 1);
    }
    else
    {
        ft_putnstr(str, 9);
        std::cout << ".";
    }
    std::cout << "|";
}