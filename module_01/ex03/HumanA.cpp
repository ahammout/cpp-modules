/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:31:07 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 18:58:26 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"Weapon.hpp"

HumanA::HumanA(std::string HumanName, Weapon &WeaponTMP) : name(HumanName), weapon(WeaponTMP) {}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA(){}