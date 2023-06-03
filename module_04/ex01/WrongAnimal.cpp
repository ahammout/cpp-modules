/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:25:14 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 22:15:16 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal ()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string str)
{
    this->type = str;
    std::cout << "WrongAnimal parameter constructor called" << std::endl;    
}

WrongAnimal::WrongAnimal(WrongAnimal &SRC)
{
    std::cout << this->type << "WrongAnimal copy constructor called" << std::endl;
    *this = SRC;
}

WrongAnimal&    WrongAnimal::operator=(WrongAnimal &RightHand)
{
    this->type = RightHand.type;
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

void        WrongAnimal::makeSound() const
{
    std::cout << this->type << " Makes the sound of WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
