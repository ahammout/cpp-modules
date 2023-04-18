/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 06:59:37 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/18 07:16:56 by ahammout         ###   ########.fr       */
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
    /// Array of contacts: 8 Contacts.
    Contact contacts[8];
    int     curr_index;

public:
    void    add();
    void    search();
    void    exit();
    PhoneBook(/* args */);
    ~PhoneBook();
};


#endif