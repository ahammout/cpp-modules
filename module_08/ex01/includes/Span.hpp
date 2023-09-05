/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:17:13 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/28 17:01:48 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
    std::vector<int> v;
    unsigned int n;

    public:
    Span();
    Span(unsigned int N);
    Span(Span &SRC);
    ~Span();

    unsigned int size();
    void    print();
    Span&   operator=(Span &RightHand);    
    void    addNumber(int x);
    void    fillSpan();

    int shortestSpan();
    int longestSpan();
};

#endif