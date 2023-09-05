/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:11:48 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/29 01:10:22 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include<algorithm> 
#include<vector>

template <class T>
void    easyfind(std::vector<T> &v, int n)
{
    if (std::find(v.begin(), v.end(), n) != v.end())
        std::cout << "√: Element founded" << std::endl;
    else
        throw std::exception();
}

#endif