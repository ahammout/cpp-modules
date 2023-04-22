/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:13:36 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/22 00:22:50 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main(void)
{
    Zombie  *zombie;

    zombie = newZombie("karolzzzzzzzz");
    zombie->announce();
    randomChump("jaaackzzzzzz");
    return (0);
}