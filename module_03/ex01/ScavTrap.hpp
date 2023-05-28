/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:15:44 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/26 22:30:26 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include<iostream>
#include"ClapTrap.hpp"

class   ScavTrap: public ClapTrap
{
    public:
    /*-------------- Constructers -------------*/
    ScavTrap();
    ScavTrap(std::string ScavTrapName);
    ScavTrap(ScavTrap &scavTrapSRC);

    /*----- OVERLOADING OPERATORS --------------*/
    ScavTrap&   operator=(ScavTrap &rightHand);

    /*---------- Member Functions -------------*/
    void    attack(const std::string &target);
    void    guardGate();
    /*------------ Deconstructers -------------*/
    ~ScavTrap();
};


#endif