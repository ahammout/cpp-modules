/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:35:38 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/31 13:06:06 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain &RightHand)
{
    std::cout << "Brain copy destructor called" << std::endl;
    *this = RightHand;
}

Brain   &Brain::operator=(Brain &RightHand)
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

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}