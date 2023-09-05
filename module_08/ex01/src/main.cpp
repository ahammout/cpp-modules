/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:16:41 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/29 10:27:38 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/Span.hpp"

int main()
{
    Span sp(15);
    
    try
    {
        sp.fillSpan();
        //----------- SCOP TO TEST THE COPY CONSTRUCTOR AND ASSIGN OP --------------//
        {
            Span sp2(sp);
            sp2.print();
            sp2.addNumber(95);
            sp2.print();
            sp2 = sp;
            sp2.print();
        }
        std::cout << "▶ " << sp.longestSpan() << std::endl;
        std::cout << "▶ " << sp.shortestSpan() << std::endl;

        // ----- THIS LINE MUST THROW AN EXCEPTION ------- /
        sp.addNumber(95);
    }
    catch (std::exception const &ex)
    {
        std::cout << "╳: No Space left to add an element!" << std::endl;
    }
    return (0);
}