/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 01:42:29 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/29 16:52:28 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(void)
{
    Zombie  *zombie;
    int     N;
    int     i;

    N = 10;
    zombie = zombieHorde(N, "Abdelkadir Zombie");
    //// Announce zombies
    i = 0;
    while (i < N)
    {
        zombie[i].announce();
        i++;
    }
    delete[] zombie;
    return (0);
}