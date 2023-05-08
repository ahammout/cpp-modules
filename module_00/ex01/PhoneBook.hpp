/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 06:59:37 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/08 21:45:04 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include<iostream>
#include<string>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int     size;

public:
    PhoneBook();
    void    add();
    void    search();
    void    displayList();
    void    displayContact(int index);
    ~PhoneBook();
};

void    renderStr(std::string str);
void    ft_putnstr(std::string str, int len);
bool    all_isdigit(std::string str);

#endif

