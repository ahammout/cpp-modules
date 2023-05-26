/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:13:25 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/24 15:18:11 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

class   Fixed
{
    private:
    int fixPoint;
    static const int    fractionalBits = 8;

    public:
    Fixed();
    Fixed (const Fixed &fixedSrc);
    Fixed& operator=(const Fixed &rightHand);
    ~Fixed();
    int     getRawBits (void) const;
    void    setRawBits(int const raw);
};

#endif