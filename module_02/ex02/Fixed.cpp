/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:37:31 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/24 19:19:48 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

/*--------------------------* CONSTRUCTORS *--------------------------*/

Fixed::Fixed()
{
    fixPoint = 0;
}

Fixed::Fixed(const Fixed &oldFixed)
{
    fixPoint = oldFixed.fixPoint;
}

Fixed::Fixed(const int intValue)
{
    fixPoint = intValue * pow(2, fractionalBits);
}

Fixed::Fixed(const float floatValue)
{
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
    return (fixPoint);
}

void Fixed::setRawBits(int const raw)
{
    fixPoint = raw;
}

/*--------------------------* OVERLOADING OPERATORS *--------------------------*/

Fixed&  Fixed::operator=(const Fixed &rightHand)
{
    if (this != &rightHand)
        fixPoint = rightHand.getRawBits();
    return (*this);
}

std::ostream&   operator<<(std::ostream &output, const Fixed &rightOBJ)
{
    output << rightOBJ.toFloat();
    return (output);
}

bool    Fixed::operator<(const Fixed &rihgtOBJ) const
{
    return (fixPoint < rihgtOBJ.getRawBits());
}

bool    Fixed::operator>(const Fixed &rihgtOBJ) const
{
    return (fixPoint > rihgtOBJ.getRawBits());
}

bool    Fixed::operator>=(const Fixed &rihgtOBJ) const
{
    return (fixPoint >= rihgtOBJ.getRawBits());
}

bool    Fixed::operator<=(const Fixed &rihgtOBJ) const
{
    return (fixPoint <= rihgtOBJ.getRawBits());
}

bool    Fixed::operator==(const Fixed &rihgtOBJ) const
{
    return (fixPoint == rihgtOBJ.getRawBits());
}

bool    Fixed::operator!=(const Fixed &rightOBJ) const
{
    return (fixPoint != rightOBJ.getRawBits());
}

Fixed   Fixed::operator+(const Fixed &rightOBJ) const
{
    return (Fixed(toFloat() + rightOBJ.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &rightOBJ) const
{
    return (Fixed(toFloat() * rightOBJ.toFloat()));
}
Fixed   Fixed::operator-(const Fixed &rightOBJ) const
{
    return (Fixed(toFloat() - rightOBJ.toFloat()));
}

Fixed   Fixed::operator/(const Fixed &rightOBJ) const
{
    return (Fixed(toFloat() / rightOBJ.toFloat()));
}

Fixed   Fixed::operator++()
{
    ++fixPoint;
    return (*this);
}

Fixed   Fixed::operator++(int) 
{
    Fixed   temp;

    temp = *this;
    ++fixPoint;
    return (temp);
}

Fixed   Fixed::operator--()
{
    --fixPoint;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed   temp;

    temp = *this;
    --fixPoint;
    return (temp);
}

Fixed   &Fixed::max(Fixed &left, Fixed &right)
{
    if (left > right)
        return (left);
    return (right);}

const Fixed   &Fixed::max(const Fixed &left, const Fixed &right)
{
    if (left > right)
        return (left);
    return (right);
}

Fixed   &Fixed::min(Fixed &left, Fixed &right)
{
    if (left < right)
        return (left);
    return (right);
}

const Fixed   &Fixed::min(const Fixed &left, const Fixed &right)
{
    if (left < right)
        return (left);
    return (right);
}

/*--------------------------* DECSTRUCTOR *--------------------------*/

Fixed::~Fixed(){}