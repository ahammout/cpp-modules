/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:52:26 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/24 15:29:38 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed
{
    private:
    int fixPoint;
    static const int fractionalBits = 8;

    public:

    /*----- CONSTRUCTORS -----*/
    Fixed();
    Fixed(const Fixed &fixedSrc);
    Fixed(const float floatValue);
    Fixed(const int intValue);

    /*----- FUNCTIONS -------*/
    int getRawBits(void) const;
    void setRawBits(int const raw);
    int toInt(void) const;
    float toFloat(void) const;
    
    /*----- OVERLOADING OPERATORS -----*/
    Fixed &operator=(const Fixed &rightHand);
    
    /*----- DECONSTRUCTORS -----*/
    ~Fixed();
};

std::ostream &operator<<(std::ostream &output, const Fixed &FixedRef);


#endif
