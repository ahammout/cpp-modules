/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 22:48:42 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/23 19:51:56 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>
#include <cstdlib>


template <class T>
class Array{
    private:
    T*              arr;
    unsigned int    lenght;

    public:
    
    //---***------------------------------------- CONSTRUCTORS / DESTRUCTOR ---------------------------------***---//
    Array() : arr(new T()), lenght(0)
    {
            std::cout << "▷ default constructor called" << std::endl;
    }

    Array(unsigned int s) : arr(new T[s]), lenght(s)
    {
        std::cout << "▷ parametred constructor called" << std::endl;
    }

    Array(Array &SRC) : arr(new T[SRC.getSize()]), lenght(SRC.getSize())
    {
        std::cout << "▷ Copy constructor called" << std::endl;
        for (unsigned int i = 0; i < this->getSize(); i++)
            this->arr[i] = SRC.arr[i];
        *this = SRC;
    }

    ~Array()
    {
        std::cout << "◁ Destructor called" << std::endl;
        delete[] this->arr;
    }

    //---***------------------------------ EXCEPTION CLASS --------------------------***---//

    class   OutOfTheBond : std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("╳: This index is out of the bond");
        }
    };

    //---***------------------------------------- OVERLOADING OPERATORS ---------------------------------***---//

    Array &operator=(Array<T> &RightHand)
    {
        if (this != &RightHand)
        {
            if (this->getSize() > 0)
                delete [] this->arr;
            this->lenght = RightHand.getSize();
            this->arr = new T[RightHand.getSize()];
            for (unsigned int i = 0; i < this->getSize(); i++)
                this->arr[i] = RightHand[i];
        }
        return (*this);
    }

    T   &operator[](unsigned int index)
    {
        std::cout << "The passed arg: " << index << '\n';
        if (index > this->lenght)
            throw OutOfTheBond();
        return (arr[index]);
    }
    
    //---***------------------------------ GETTERS --------------------------***---//
    unsigned int getSize()
    {
        return (this->lenght);
    }
};
#endif