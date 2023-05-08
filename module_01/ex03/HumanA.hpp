/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:47:12 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/08 19:00:44 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"

class HumanA
{
    private:
    std::string name;
    Weapon weapon;

    public:
    HumanA(std::string HumanName, Weapon weap);
    void        attack();
    ~HumanA();
};

#endif