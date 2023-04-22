/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 01:44:37 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/22 01:47:37 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

class   Zombie
{
    private:
    std::string name;

    public:
    Zombie();
    void    newZombie(std::string name);
    void    announce(void);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name);

#endif