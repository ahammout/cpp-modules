/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:57:23 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 22:16:05 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(Cat &Src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = NULL;
    *this = Src;
}

Cat& Cat::operator=(Cat &RightHand)
{
    int i;

    i = 0;
    if (this != &RightHand)
    {
        this->type = RightHand.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*RightHand.brain);
    }
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
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}