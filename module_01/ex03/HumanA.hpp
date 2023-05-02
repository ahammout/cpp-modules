/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:47:12 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/02 16:07:44 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"

class HumanA
{
    private:
    std::string name;
    Weapon Weap;

    public:
    
    
    void        attack();
};

#endif