/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:25:20 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 22:13:29 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include<iostream>
#include"WrongAnimal.hpp"
#include"WrongBrain.hpp"

class WrongCat : public WrongAnimal
{
    private:
    WrongBrain   *wrongBrain;

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
    virtual ~WrongCat();
};
#endif