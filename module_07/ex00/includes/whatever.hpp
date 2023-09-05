/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:34:42 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/17 22:54:33 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include<iostream>

template <class T>
void swap(T &a, T &b){
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <class T>
T min(T &a, T &b){
    if (a == b)
        return (b);
    if (a > b)
        return (b);
    else
        return (a);
}

template <class T>
T max(T &a, T &b){
    if (a == b)
        return (b);
    else if (a > b)
        return (a);
    else
        return (b);
}
#endif