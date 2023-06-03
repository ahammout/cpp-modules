/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongBrain.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:40:20 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/31 12:41:13 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGBRAIN_HPP
#define WRONGBRAIN_HPP

#include<iostream>

class WrongBrain
{
    private:
    std::string ideas[100];

    public:
    /*----- CONSTRUCTORS -----*/
    WrongBrain();
    WrongBrain(WrongBrain &SRC);
    
    /*----- OVERLOADING OPERATORS -----*/
    WrongBrain   &operator=(WrongBrain &RightHand);
    
    /*----- DECONSTRUCTORS -----*/
    ~WrongBrain();
};

#endif