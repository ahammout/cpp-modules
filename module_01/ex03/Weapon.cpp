/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:39:53 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/02 16:00:45 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string ArmType)
{
    type = ArmType;
}

const std::string Weapon::getType()
{
    return (type);
}

void    Weapon::setType(std::string Type)
{
    type = Type;
}