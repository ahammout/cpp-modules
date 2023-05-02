/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:52:32 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/02 16:00:37 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>

class Weapon
{
    private:
    std::string type;

    public:
    Weapon(std::string ArmTyp);
    const std::string getType();
    void    setType(std::string Type);
};

#endif