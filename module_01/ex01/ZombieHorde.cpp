/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 01:52:59 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/29 16:29:47 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie  *zombie;
    int     i;

    zombie = new Zombie[N];
    i = 0;
    while (i < N)
    {
        zombie[i].newZombie(name);
        i++;
    }
    return (zombie);
}