/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:18:36 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/29 01:22:20 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/Span.hpp"

Span::Span(): n(0)
{
    std::cout << "▷ default constructor called" << std::endl;
}
Span::Span(unsigned int N): n(N)
{
    std::cout << "▷ Paramered constructor called" << std::endl;
}

Span::Span(Span &SRC)
{
    std::cout << "▷ Copy constructor called" << std::endl;
    for (unsigned int i = 0; i < SRC.size(); i++)
        this->v.push_back(SRC.v[i]);
    this->n = SRC.size();
}

Span::~Span()
{
    std::cout << "◁ Destructor called" << std::endl;
}

Span&   Span::operator=(Span &RightHand)
{
    if (this->v.size() > 0)
        this->v.erase(v.begin(), v.end());
    for (unsigned int i = 0; i < RightHand.size(); i++)
        this->v.push_back(RightHand.v[i]);
    this->n = RightHand.size();
    return (*this);
}

void    Span::addNumber(int x)
{
    if (v.size() < this->size())
        v.push_back(x);
    else
        throw std::exception();
}

unsigned int Span::size()
{
    return (this->n);
}

void    Span::print()
{
    for (unsigned int i = 0; i < this->size(); i++)
        std::cout << this->v[i] << std::endl; 
}

void    Span::fillSpan()
{
    for (unsigned int i = this->size(); i > 0; i--)
        this->addNumber(i);
}

int Span::shortestSpan()
{
    std::vector<int> tmp;
    int dis;

    for (unsigned int i = 0; i < this->size(); i++)
        tmp.push_back(this->v[i]);
    std::sort(tmp.begin(), tmp.end());
    dis = (tmp[1] - tmp[0]);
    for (unsigned int i = 0; i < this->size(); i++)
    {
        if (tmp[i + 1] && (tmp[i + 1] - tmp[i]) < dis)
            dis = (tmp[i + 1] - tmp[i]);
    }
    return (dis);
}

int Span::longestSpan()
{
    std::vector<int> tmp;

    for (unsigned int i = 0; i < this->size(); i++)
        tmp.push_back(this->v[i]);
    std::sort(tmp.begin(), tmp.end());
    std::sort(tmp.begin(), tmp.end());
    return (tmp[this->size() - 1] - tmp[0]);
}