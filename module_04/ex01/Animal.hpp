/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:33:21 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 21:46:28 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal
{
    protected:
    std::string type;

    public:
    /*----- CONSTRUCTORS -----*/
    Animal();
    Animal(std::string str);
    Animal(Animal &Src);
    
    /*----- OVERLOADING OPERATORS -----*/
    Animal  &operator=(Animal &RightHand);

    /*----- MEMBER FUNCTIONS -----*/
    virtual std::string getType(void) const;
    virtual void makeSound() const;
    
    /*----- DECONSTRUCTORS -----*/
    virtual ~Animal();
};

#endif