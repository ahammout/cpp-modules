/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:39:30 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/11 16:22:37 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/Serializer.hpp"

//---***------------------------------------- CONSTRUCTORS ---------------------------------***---//

Serializer::Serializer()
{
    std::cout << "▷ Default constructor called" << std::endl;
} 

Serializer::~Serializer()
{
    std::cout << "◁  Destructor called" << std::endl;
}

Serializer::Serializer(Serializer &SRC)
{
    std::cout << "▷ Copy constructor called" << std::endl;
    *this = SRC;
}

//---***------------------------------------- OVERLOADING OPERATORS ---------------------------------***---//

Serializer& Serializer::operator=(Serializer &RightHand)
{
    (void) RightHand;
    return (*this);
}

//---***------------------------------ SCALARCONVERTER METHODS --------------------------***---//


uintptr_t Serializer::serialize(Data* ptr)
{
    std::cout << "Serialize" << std::endl;
    return (reinterpret_cast<uintptr_t>(ptr));
}


Data* Serializer::deserialize(uintptr_t raw)
{
    std::cout << "Deserialize" << std::endl;
    return (reinterpret_cast<Data*>(raw));
}