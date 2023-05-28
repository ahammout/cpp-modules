/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:25:31 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/26 23:05:28 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include<iostream>
#include"ClapTrap.hpp"

class   FragTrap: public ClapTrap
{
    public:
    /*-------------- Constructers -------------*/
    FragTrap();
    FragTrap(std::string NAME);
    FragTrap(FragTrap &fragTrapSRC);
    
    /*----- OVERLOADING OPERATORS --------------*/
    FragTrap    &operator=(FragTrap &rightHand);

    /*---------- Member Functions -------------*/
    void    attack(const std::string &target);
    void    hightFivesGuys(void);

    /*------------ Deconstructers -------------*/
    ~FragTrap();
};

#endif