/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:15:36 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/27 12:06:14 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

/*--------------------------* CONSTRUCTORS *--------------------------*/

ScavTrap::ScavTrap():  ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string ScavTrapName): ClapTrap(ScavTrapName)
{
    std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &ScavTrapSRC)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = ScavTrapSRC;
}

/*--------------------------* OVERLOADING OPERATORS *--------------------------*/

ScavTrap    &ScavTrap::operator=(ScavTrap &rightHand)
{
    Name = rightHand.Name;
    hitPoints = rightHand.hitPoints;
    energyPoints = rightHand.energyPoints;
    attackDem = rightHand.attackDem;
    return(*this);
}

/*--------------------------* MEMBER FUNCTIONS *--------------------------*/

void    ScavTrap::attack(const std::string &target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "ScavTrap " << Name << " attacks " << target << " causing " << attackDem << " points of damage!" << std::endl;
        energyPoints--;
    }
    else
        std::cout << "Can't Attack The target " << target <<  " there is no Hit points" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is in Gate keeper mode" << std::endl;
}

/*--------------------------* DESTRUCTOR *--------------------------*/

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}