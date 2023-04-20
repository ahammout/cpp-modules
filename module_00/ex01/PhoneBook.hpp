/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 06:59:37 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/19 23:01:59 by ahammout         ###   ########.fr       */
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
};

#endif

