/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:15:00 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 21:49:57 by ahammout         ###   ########.fr       */
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

    while (funcNames[index].length())
    {
        if (funcNames[index].compare(level) == 0)
        {
            (objPTR->*ptrF[index])();
            return ;
        }
        index++;
    }
    std::cout << "INVALID LEVEL!" << std::endl;
}