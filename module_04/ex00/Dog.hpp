/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:50:58 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 21:28:57 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include<iostream>
#include"Animal.hpp"

class Dog : public Animal
{
    public:
    /*----- CONSTRUCTORS -----*/
    Dog();
    Dog(Dog &Src);

    /*----- OVERLOADING OPERATORS -----*/
    Dog&    operator=(Dog &RightHand);

    /*----- MEMBER FUNCTIONS -----*/
    std::string getType(void) const;
    void        makeSound() const;

    /*----- DECONSTRUCTORS -----*/
    ~Dog();
};
#endif