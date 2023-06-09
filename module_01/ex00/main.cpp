/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:13:36 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/16 15:52:11 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

#include<unistd.h>
#include <stdlib.h>

int main(void)
{
    Zombie  *zombie;

    zombie = newZombie("T-Dog");
    zombie->announce();
    delete zombie;
    randomChump("Rick");
    return (0);
}