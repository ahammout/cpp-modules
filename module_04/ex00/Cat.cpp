/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:57:23 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 22:16:22 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat &Src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = Src;
}

Cat& Cat::operator=(Cat &RightHand)
{
    if (this != &RightHand)
        this->type = RightHand.type;
    return (*this);
}

std::string Cat::getType(void) const 
{
    return (this->type);
}

void    Cat::makeSound() const 
{
    std::cout << this->type << " Makes the sound of Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}