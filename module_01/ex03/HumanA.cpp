/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:31:07 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/02 15:54:07 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(std::string Human, Weapon Arm)
{
    name = Human;
    Weap = Arm;
}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << Weap.getType() << std::endl;
}