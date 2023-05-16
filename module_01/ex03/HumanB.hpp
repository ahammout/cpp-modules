/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:18:17 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 18:49:37 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"Weapon.hpp"

class HumanB
{
    private:
    std::string name;
    Weapon *weapon;

    public:
    HumanB(std::string Human);
    void        attack();
    void        setWeapon(Weapon &WeaponTMP);
    ~HumanB();
};

#endif