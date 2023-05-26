/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:45:12 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/24 20:04:48 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    // std::cout << "The comparison < result: "<< (a < b) << "\n";
    // std::cout << "The comparison > result: "<< (a > b) << "\n";
    // std::cout << "The comparison >= result: "<< (a >= b) << "\n";
    // std::cout << "The comparison <= result: "<< (a <= b) << "\n";
    // std::cout << "The comparison == result: "<< (a == b) << "\n";
    // std::cout << "The comparison != result: "<< (a != b) << "\n";

    // std::cout << "Arethemetic operations of a & b: " << b * a<< std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;

    return (0);
}
