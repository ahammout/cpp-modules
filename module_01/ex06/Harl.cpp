/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:28:36 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 21:55:31 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
   std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    Harl        *objPTR = nullptr;
    void        (Harl::*ptrF[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string funcNames[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         index = 0;

    while (funcNames[index].length() && funcNames[index].compare(level) != 0)
        index++;
    switch (index)
    {
    case 0:
        (objPTR->*ptrF[0])();
        break;
    
    case 1:
        (objPTR->*ptrF[1])();
        break;

    case 2:
        (objPTR->*ptrF[2])();
        break;

    case 3:
        (objPTR->*ptrF[3])();
        break;

    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}