/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:20:31 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/27 15:32:01 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main(void)
{
    ClapTrap    clap("MrRobot");
    clap.attack("SomeEnemy");
    clap.takeDemage(6);
    clap.beRepaired(6);
    clap.attack("SomeEnemy");
    clap.takeDemage(10);
    clap.attack("SomeEnemy");
    clap.beRepaired(6);
    return (0);
}