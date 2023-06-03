/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:25:14 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/03 13:51:30 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal ()
{
    this->type = "WrongAnimal";
    std::cout << this->type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal (std::string str)
{
    std::cout << "WrongAnimal parameter constructor called" << std::endl;
    this->type = str;
}

WrongAnimal::WrongAnimal(WrongAnimal &SRC)
{
    std::cout << this->type << " copy constructor called" << std::endl;
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
