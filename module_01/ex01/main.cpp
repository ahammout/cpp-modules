/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 01:42:29 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/22 01:52:53 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(void)
{
    Zombie  *zombie;
    
    zombie = zombieHorde(55, "Zwaaaaamba");
    delete zombie;
}