/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 01:42:29 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/09 00:49:15 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(void)
{
    Zombie  *zombie;
    int     N;
    int     i;

    N = 99;
    zombie = zombieHorde(N, "Abdelkadir Zombie");
    i = 0;
    while (i < N)
    {
        zombie[i].announce();
        i++;
    }
    delete[] zombie;
    return (0);
}