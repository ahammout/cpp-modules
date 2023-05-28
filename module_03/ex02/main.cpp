/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:20:31 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/27 12:30:26 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"FragTrap.hpp"

int main(void)
{
    FragTrap    frag("MrRobot");

    frag.attack("SomeEnemy");
    frag.takeDemage(50);
    frag.attack("SomeEnemy");
    frag.takeDemage(50);
    frag.beRepaired(100);
    frag.attack("SomeEnemy");
    return (0);
}