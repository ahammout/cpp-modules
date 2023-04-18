/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 06:55:39 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/18 07:16:02 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darkestSecret;
    std::string phoneNumber;
    
public:
    Contact();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getDarkestSecret();
    std::string getPhoneNumber();

    void    insertFirstName();
    void    insertLastName();
    void    insertNickName();
    void    insertDarkestSecret();
    void    insertPhoneNumber();
};

#endif