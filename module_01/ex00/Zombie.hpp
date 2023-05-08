/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 22:29:21 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/08 15:16:24 by ahammout         ###   ########.fr       */
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
    void    newZombie(std::string name);
    void    announce(void);
    ~Zombie();
};

Zombie* newZombie( std::string name);
void randomChump( std::string name );

#endif