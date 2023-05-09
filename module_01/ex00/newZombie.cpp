/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:31:52 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/09 00:48:30 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* newZombie( std::string name)
{
    Zombie *zombie;

    zombie = new Zombie;
    zombie->newZombie(name);
    return (zombie);----
}