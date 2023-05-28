/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:25:10 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/27 12:06:12 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

/*--------------------------* CONSTRUCTORS *--------------------------*/

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string NAME): ClapTrap(NAME)
{
    std::cout << "FragTrap Name constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &fragtrapSRC)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = fragtrapSRC;
}

/*--------------------------* OVERLOADING OPERATORS *--------------------------*/

FragTrap&    FragTrap::operator=(FragTrap &rightHand)
{
    Name = rightHand.Name;
    hitPoints = rightHand.hitPoints;
    energyPoints = rightHand.energyPoints;
    attackDem = rightHand.attackDem;
    return (*this);
}

/*--------------------------* MEMBER FUNCTIONS *--------------------------*/

void    FragTrap::attack(const std::string &target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "FragTrap " << Name << " attacks " << target << " causing " << attackDem << " points of damage!" << std::endl;
        energyPoints--;
    }
    else
        std::cout << "Can't Attack The target " << target <<  " there is no Hit points" << std::endl;
}

void    FragTrap::hightFivesGuys(void)
{
    std::cout << "FragTrap "<< Name << " high fives" << std::endl;
}

/*--------------------------* DESTRUCTOR *--------------------------*/

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}