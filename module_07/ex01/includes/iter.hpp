/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:52:28 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/17 22:39:34 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>

template <class T>
void    iter(T *arr, int lenght, void (*func)( T const & x ))
{
    for (int i = 0; i < lenght; i++)
        func(arr[i]);
}

#endif