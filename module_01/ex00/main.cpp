/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:13:36 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/08 15:25:32 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

#include<unistd.h>

int main(void)
{
    Zombie  *zombie;

    zombie = newZombie("3mi 7dooo");
    zombie->announce();
    delete zombie;
    randomChump("lbaaatol");
    return (0);
}