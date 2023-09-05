/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:39:16 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/11 16:24:24 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/Serializer.hpp"

//* CASTING TYPE USED: reinterpret_cast.

int main(void)
{
    Data        *ptr = NULL;
    uintptr_t   ui;

    ptr = new Data;
    ptr->x = 1999;
    std::cout << "x value before: " << ptr->x << '\n';
    ui = Serializer::serialize(ptr);
    std::cout << "Address memory: " << ui << std::endl;
    ptr = Serializer::deserialize(ui);
    std::cout << ptr << std::endl;
    std::cout << "x value after: " << ptr->x << '\n';
    delete ptr;
    return (0);
}