/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:18:17 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/02 15:53:55 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"Weapon.hpp"

class HumanB
{
    private:
    std::string name;
    Weapon Weap;

    public:
    HumanB(std::string Human);
    void        setWeapon(Weapon Arm);
    void        attack();
    ~HumanB();
};

#endif