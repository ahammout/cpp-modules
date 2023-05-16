/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:39:53 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 19:13:58 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string typeTMP)
{
    type = typeTMP;
}

const std::string& Weapon::getType()
{
    std::string &typeREF = type;

    return ((const std::string&)typeREF);
}

void    Weapon::setType(std::string typeTMP)
{
    type = typeTMP;
}

Weapon::~Weapon() {}
