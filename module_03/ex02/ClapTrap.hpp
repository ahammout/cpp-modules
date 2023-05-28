/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 02:20:41 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/26 21:47:16 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{
    protected:
    std::string Name; 
    int hitPoints;
    int energyPoints;
    int attackDem;

    public:
    /*-------------- Constructers -------------*/
    ClapTrap();
    ClapTrap(std::string NAME);
    ClapTrap(ClapTrap &clapTrapSrc);
    
    /*----- OVERLOADING OPERATORS --------------*/
    ClapTrap    &operator=(ClapTrap &rightHand);

    /*---------- Member Functions -------------*/
    void    attack(const std::string &target);
    void    takeDemage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    
    /*------------ Deconstructers -------------*/
    ~ClapTrap();
};

#endif