/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongBrain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:40:22 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/31 16:12:46 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongBrain.hpp"

WrongBrain::WrongBrain()
{
    std::cout << "WrongBrain constructor called" << std::endl;
}

WrongBrain::WrongBrain(WrongBrain &RightHand)
{
    std::cout << "WrongBrain copy constructor called" << std::endl;
    *this = RightHand;
}

WrongBrain   &WrongBrain::operator=(WrongBrain &RightHand)
{
    int i;

    i = 0;
    if (this != &RightHand)
    {
        while (i < 100)
        {
            this->ideas[i] = RightHand.ideas[i];
            i++;
        }
    }
    return (*this);
}

WrongBrain::~WrongBrain()
{
    std::cout << "WrongBrain destructor called" << std::endl;
}