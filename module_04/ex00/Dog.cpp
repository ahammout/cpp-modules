/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:55:08 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 22:16:32 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog &Src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = Src;
}

Dog& Dog::operator=(Dog &RightHand)
{
    if (this != &RightHand)
        this->type = RightHand.type;
    return (*this);
}

std::string Dog::getType(void) const
{
    return (this->type);
}

void    Dog::makeSound() const
{
    std::cout << this->type << " Makes the sound of Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}