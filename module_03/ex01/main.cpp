/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:20:31 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/27 12:28:06 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main(void)
{
    ScavTrap    scav("MrRobot");

    scav.guardGate();
    scav.attack("SomeEnemy");
    scav.takeDemage(10);
    scav.attack("SomeEnemy");
    scav.beRepaired(10);
    scav.takeDemage (100);
    scav.attack("SomeEnemy");
    scav.beRepaired(50);
    return (0);
}