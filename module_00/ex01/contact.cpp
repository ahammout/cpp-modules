/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:55:30 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/18 02:07:26 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

class contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string darkestSecret;
    long        phoneNumber;
    
public:
    contact();
    ~contact();
};

contact::contact()
{
    
}