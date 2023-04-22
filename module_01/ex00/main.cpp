/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:13:36 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/22 01:39:47 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

#include<unistd.h>

int main(void)
{
    Zombie  *zombie;

    zombie = newZombie("karolzzzzzzzz");
    zombie->announce();
    delete zombie;
    randomChump("jaaackzzzzzz");
    sleep(10);
    return (0);
}