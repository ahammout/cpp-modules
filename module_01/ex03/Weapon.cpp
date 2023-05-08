/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:39:53 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/08 19:02:47 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string ArmType)
{
    type = ArmType;
}

Weapon::~Weapon(){
}

const std::string Weapon::getType()
{
    return (type);
}

void    Weapon::setType(std::string Type)
{
    type = Type;
}