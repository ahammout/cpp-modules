/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:45:45 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/24 19:19:59 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include <cmath>

class Fixed
{
    private:
    int fixPoint;
    static const int fractionalBits = 8;

    public:

    /*----- CONSTRUCTORS -----*/
    Fixed();
    Fixed(const float floatValue);
    Fixed(const int intValue);
    Fixed(const Fixed &fixedSrc);

    /*----- FUNCTIONS -------*/
    int getRawBits(void) const;
    void setRawBits(int const raw);
    int toInt(void) const;
    float toFloat(void) const;
    
    /*----- OVERLOADING OPERATORS -----*/
    Fixed &operator=(const Fixed &rightHand);

    //--- Comparison operators >, <, >=, <=, == and !=
    bool operator<(const Fixed &rihgtOBJ) const;
    bool operator>(const Fixed &rightOBJ) const;
    bool operator>=(const Fixed &rightOBJ) const;
    bool operator<=(const Fixed &rightOBJ) const;
    bool operator==(const Fixed &rightOBJ) const;
    bool operator!=(const Fixed &rightOBJ) const;

    //--- Arithmetic operators +, -, *, and /
    Fixed   operator+(const Fixed &rightOBJ) const ;
    Fixed   operator*(const Fixed &rightOBJ) const;
    Fixed   operator-(const Fixed &rightOBJ) const;
    Fixed   operator/(const Fixed &rioghtOBJ) const;

    //---  Pre/Post-increment/dencrement operators;
    Fixed   operator++() ;  // pre
    Fixed   operator++(int); // post
    Fixed   operator--() ; // pre
    Fixed   operator--(int); // post

    //--- Min() Max()
    static Fixed   &max(Fixed &left, Fixed &right);
    static const Fixed   &max(const Fixed &left, const Fixed &right);
    static Fixed   &min(Fixed &left, Fixed &right);
    static const Fixed   &min(const Fixed &left, const Fixed &right);
    
    /*----- DECONSTRUCTORS -----*/
    ~Fixed();
};

std::ostream &operator<<(std::ostream &output, const Fixed &rightOBJ);


#endif