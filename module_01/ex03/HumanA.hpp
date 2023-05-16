 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:47:12 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 17:11:34 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"

class HumanA
{
    private:
    std::string name;
    Weapon &weapon;

    public:
    HumanA(std::string HumanName, Weapon &WeaponTMP);
    void    attack();
    ~HumanA();
};

#endif