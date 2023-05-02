/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:09:25 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/02 15:54:04 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"


HumanB::HumanB(std::string Human)
{
    name = Human;
}

void    HumanB::attack()
{
    std::cout << name << " attacks with their " << Weap.getType() << std::endl;
}

void        HumanB::setWeapon(Weapon Arm)
{
    Weap = Arm;
}