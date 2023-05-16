/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:09:25 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 18:54:02 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string HumanNAME): name(HumanNAME) {}

void    HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void        HumanB::setWeapon(Weapon &WeaponTMP)
{
    weapon = &WeaponTMP;
}

HumanB::~HumanB(){}