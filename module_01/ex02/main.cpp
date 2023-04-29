/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:24:31 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/29 17:37:51 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(void)
{
    std::string message = "HI THIS IS BRAIN";
    std::string stringPTR = message;
    std::string *stringREF = &message;

    std::cout << "address: " << &message << std::endl;
    std::cout << "address: " << &stringPTR << std::endl;
    std::cout << "address: " << stringREF << std::endl;
    
    std::cout << "Value: " << message << std::endl;
    std::cout << "Value: " << stringPTR << std::endl;
    std::cout << "Value: " << *stringREF << std::endl;
    return (0);
}