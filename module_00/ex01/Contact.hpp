/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 06:55:39 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/08 18:39:15 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    std::string getElement(int attr);
    bool    insertFirstName();
    bool    insertLastName();
    bool    insertNickName();
    bool    insertPhoneNumber();
    bool    insertDarkestSecret();
    void    removeContact();
};

#endif