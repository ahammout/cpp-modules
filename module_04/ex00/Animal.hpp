/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:33:21 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/02 10:22:26 by ahammout         ###   ########.fr       */
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
    Animal(Animal &Src);
    Animal(std::string str);
    
    /*----- OVERLOADING OPERATORS -----*/
    Animal  &operator=(Animal &RightHand);

    /*----- MEMBER FUNCTIONS -----*/
    virtual std::string getType(void) const;
    virtual void makeSound() const;
    
    /*----- DECONSTRUCTORS -----*/
    virtual ~Animal();
};

#endif