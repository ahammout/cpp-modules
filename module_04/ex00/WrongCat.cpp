/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:25:18 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 22:17:15 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat () : WrongAnimal("WrongCat")
{
    std::cout << this->type << " constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &SRC)
{
    std::cout << this->type << " copy constructor called" << std::endl;
    *this = SRC;
}

WrongCat&    WrongCat::operator=(WrongCat &RightHand)
{
    this->type = RightHand.type;
    return (*this);
}

std::string WrongCat::getType(void) const
{
    return (this->type);
}

void        WrongCat::makeSound() const
{
    std::cout << this->type << " Makes the sound of WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << this->type << " destructor called" << std::endl;
}
