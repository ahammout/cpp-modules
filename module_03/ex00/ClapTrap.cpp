/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 02:35:24 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/27 15:33:22 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

/*--------------------------* CONSTRUCTORS *--------------------------*/

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    Name = "default";
    hitPoints = 10;
    energyPoints = 10;
    attackDem = 0;
}

ClapTrap::ClapTrap(std::string NAME)
{
    std::cout << "ClapTrap Name constructor called" << std::endl;
    Name = NAME;
    hitPoints = 10;
    energyPoints = 10;
    attackDem = 0;
}

ClapTrap::ClapTrap(ClapTrap &clapTrapSrc)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = clapTrapSrc;
}

/*--------------------------* OVERLOADING OPERATORS *--------------------------*/

ClapTrap    &ClapTrap::operator=(ClapTrap &clapTrapSrc)
{
    Name = clapTrapSrc.Name;
    hitPoints = clapTrapSrc.hitPoints;
    energyPoints = clapTrapSrc.energyPoints;
    attackDem = clapTrapSrc.attackDem;
    return  (*this);
}

/*--------------------------* MEMBER FUNCTIONS *--------------------------*/

void    ClapTrap::attack(const std::string &target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << attackDem << " points of damage!" << std::endl;
        energyPoints--;
    }
    else
        std::cout << "Can't Attack The target " << target <<  ", There is no more hit points!" << std::endl;
}


void    ClapTrap::takeDemage(unsigned int amount)
{
    if ((hitPoints -= amount) <= 0)
    {
        std::cout << "ClapTrap " << Name << " is died" << std::endl;
        hitPoints = 0;
    }
    else
    {
        attackDem += amount;
        std::cout << "ClapTrap " << Name << " takes demage" << " causing " << amount << " points of demage!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints <= 0)
        std::cout << "ClapTrap " << Name << " can't be repared there is no hit points" << std::endl;
    else if (energyPoints <= 0)
            std::cout << "ClapTrap " << Name << " can't be repared there is no energy points" << std::endl;
    else
    {
        hitPoints += amount;
        std::cout << "ClapTrap " << Name << " bieng repared " << " By adding " << amount << " points to hitPoints" << std::endl;
        energyPoints--;
    }        
}

/*--------------------------* DESTRUCTOR *--------------------------*/

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}