/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:25:18 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 22:18:43 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat () : WrongAnimal("WrongCat")
{ 
    std::cout << "WrongCat constructor called" << std::endl;
    this->wrongBrain = new WrongBrain();
}

WrongCat::WrongCat(WrongCat &SRC)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = SRC;
}

WrongCat&    WrongCat::operator=(WrongCat &RightHand)
{
    int i;

    i = 0;
    if (this != &RightHand)
    {
        this->type = RightHand.type;
        this->wrongBrain = new WrongBrain(*RightHand.wrongBrain);
    }
    return (*this);
}

std::string WrongCat::getType(void) const
{
    return (this->type);
}

void        WrongCat::makeSound() const
{
    std::cout << this->type << " Makes the sound of WrongAnimal" << std::endl;
}

WrongCat::~WrongCat()
{
    delete this->wrongBrain;
    std::cout << "Cat destructor called" << std::endl;
}
