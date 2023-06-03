/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:35:39 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/01 22:02:22 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain
{
    private:
    std::string ideas[100];

    public:
    /*----- CONSTRUCTORS -----*/
    Brain();
    Brain(Brain &SRC);
    
    /*----- OVERLOADING OPERATORS -----*/
    Brain   &operator=(Brain &RightHand);
    
    /*----- DECONSTRUCTORS -----*/
    ~Brain();
};

#endif