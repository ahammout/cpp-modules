/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:41:10 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 21:30:34 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include<iostream>
#include"Animal.hpp"

class Cat : public Animal
{
    public:
    /*----- CONSTRUCTORS -----*/
    Cat();
    Cat(Cat &Src);
    
    /*----- OVERLOADING OPERATORS -----*/
    Cat  &operator=(Cat &RightHand);
    
    /*----- MEMBER FUNCTIONS -----*/
    std::string getType(void) const;
    void        makeSound() const;

    /*----- DECONSTRUCTORS -----*/
    ~Cat();
};
#endif