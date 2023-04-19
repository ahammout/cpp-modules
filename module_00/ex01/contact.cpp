/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:55:30 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/19 03:10:12 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Contact.hpp"
#include"PhoneBook.hpp"

std::string Contact::getElement(std::string Element)
{
    if (Element.compare("firstName"))
        return (firstName);
    else if (Element.compare("lastName"))
        return (lastName);
    else if (Element.compare("nickName"))
        return (nickName);
    else if (Element.compare("phoneNumber"))
        return (phoneNumber);
    else if (Element.compare("darkestSecret"))
        return (darkestSecret);
    return (0);
}


void    Contact::insertFirstName(){
    std::cout << "First name > ";
    std::cin >> firstName;
}

void    Contact::insertLastName(){
    std::cout << "Last name > ";
    std::cin >> lastName;
}

void    Contact::insertNickName(){
    std::cout << "Nick name > ";
    std::cin >> nickName;
}

void    Contact::insertPhoneNumber(){
    std::cout << "Phone nubmer > ";
    std::cin >> phoneNumber;
}

void    Contact::insertDarkestSecret(){
    std::cout << "Darkest secret > ";
    std::cin >> darkestSecret;
}

