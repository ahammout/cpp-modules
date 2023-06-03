/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:44:55 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 22:16:13 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string str)
{
    std::cout << "Animal parameter constructor called" << std::endl;
    this->type = str;
}

Animal::Animal(Animal &Src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = Src;
}

Animal& Animal::operator=(Animal &RightHand)
{
    if (this != &RightHand)
        this->type = RightHand.type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void    Animal::makeSound() const
{
    std::cout << this->type << " Makes the sound of Animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}