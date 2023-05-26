/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:17:13 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/24 21:19:56 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    fixPoint = 0;
}

Fixed::Fixed(const Fixed &fixedSrc)
{
    std::cout << "Copy constructor called" << std::endl;
    fixPoint = fixedSrc.getRawBits();
}

Fixed&  Fixed::operator=(const Fixed &rightHand)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rightHand)
        fixPoint = rightHand.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixPoint);
}

void    Fixed::setRawBits(int const raw)
{
    fixPoint = raw;
}