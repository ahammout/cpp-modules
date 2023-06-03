/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:25:16 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/02 10:38:51 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal
{
    protected:
    std::string type;

    public:
    /*----- CONSTRUCTORS -----*/
    WrongAnimal();
    WrongAnimal(std::string str);
    WrongAnimal(WrongAnimal &SRC);

    /*----- OVERLOADING OPERATORS -----*/
    WrongAnimal&    operator=(WrongAnimal &RightHand);

    /*----- MEMBER FUNCTIONS -----*/
    std::string getType(void) const;
    void        makeSound() const;

    /*----- DECONSTRUCTORS -----*/
    ~WrongAnimal();
};

#endif