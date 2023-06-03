/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:25:20 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 21:29:55 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include<iostream>
#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    /*----- CONSTRUCTORS -----*/
    WrongCat();
    WrongCat(WrongCat &Src);
    
    /*----- OVERLOADING OPERATORS -----*/
    WrongCat  &operator=(WrongCat &RightHand);
    
    /*----- MEMBER FUNCTIONS -----*/
    std::string getType(void) const;
    void        makeSound() const;

    /*----- DECONSTRUCTORS -----*/
    ~WrongCat();
};
#endif