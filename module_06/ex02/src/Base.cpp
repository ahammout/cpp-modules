/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:57:45 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/06 16:32:11 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

//---***------------------------------------- CONSTRUCTORS ---------------------------------***---//

Base::~Base()
{
    std::cout << "◁  Destructor called" << std::endl;
}

//---***------------------------------ ADDITIONAL FUNCTIONS --------------------------***---//

Base*   generate(void)
{
    std::srand(time(0));
    if (((std::rand()) % 2) == 0)
        return (new A);
    else if (((std::rand()) % 2) == 1)
        return (new B);
    else
        return (new C);
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Type ▶▶ A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type ▶▶ B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type ▶▶ C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void    identify(Base & p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Type ▶▶ A" << std::endl;
    }
    catch (std::exception &badCastA)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "Type ▶▶ B" << std::endl;
        }
        catch (std::exception &badCastB)
        {
            try 
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "Type ▶▶ C" << std::endl;
            }
            catch (std::exception &badCastC)
            {
                std::cout << "╳: " << badCastC.what() << std::endl;
            }
            
        }
    }
    catch (...)
    {
        std::cout << "╳: enexpected error!" << std::endl;
    }
}