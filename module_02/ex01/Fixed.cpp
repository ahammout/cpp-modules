/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:13:05 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/24 21:20:22 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

/*--------------------------* CONSTRUCTORS *--------------------------*/

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixPoint = 0;
}

Fixed::Fixed(const Fixed &fixedSrc)
{
    std::cout << "Copy constructor called" << std::endl;
    fixPoint = fixedSrc.getRawBits();
}

Fixed::Fixed(const int intValue)
{
    std::cout <<  "int contsructor called" << std::endl;
    fixPoint = intValue * pow(2, fractionalBits);
}

Fixed::Fixed(const float floatValue)
{
    std::cout << "float contsructor called" << std::endl;
    fixPoint = floatValue * pow(2, fractionalBits);
}

/*--------------------------* FUNCTIONS *--------------------------*/

int Fixed::toInt(void) const
{
    return (fixPoint / pow(2, fractionalBits));
}

float Fixed::toFloat(void) const
{
    return (fixPoint / pow(2, fractionalBits));
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixPoint);
}

void Fixed::setRawBits(int const raw)
{
    fixPoint = raw;
}

/*--------------------------* OVERLOADING OPERATORS *--------------------------*/

Fixed&  Fixed::operator=(const Fixed &rightHand)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rightHand)
        fixPoint = rightHand.getRawBits();
    return (*this);
}

std::ostream&   operator<<(std::ostream &output, const Fixed &FixedRef)
{
    output << FixedRef.toFloat();
    return (output);
}

/*--------------------------* DECONSTRUCTOR *--------------------------*/

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}