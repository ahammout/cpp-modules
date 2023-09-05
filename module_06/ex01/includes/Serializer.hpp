/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:39:42 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/11 19:00:20 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include<iostream>

struct Data
{
    int x;
};

class Serializer
{
    private:
    Serializer();
    Serializer(Serializer &SRC);

    public:
    ~Serializer();
    Serializer& operator=(Serializer &RightHand);

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif