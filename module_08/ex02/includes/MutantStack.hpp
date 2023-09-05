/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:18:16 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/29 10:41:31 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>
class MutantStack: public std::stack<T, std::deque<T> >
{

    public:
    MutantStack()
    {
        std::cout << "▷ Default constructor called" << std::endl;
    }
    MutantStack(MutantStack &SRC)
    {
        std::cout << "▷ Copy constructor called" << std::endl;
        *this = SRC;
    }
    ~MutantStack()
    {
        std::cout << "◁ destructor called" << std::endl;
    }

    MutantStack&    operator=(MutantStack &RightHand)
    {
        (void) RightHand;
        return (*this);
    }
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    
    iterator    begin()
    {
        return (this->c.begin());
    }
    iterator    end()
    {
        return (this->c.end());
    }
};

#endif