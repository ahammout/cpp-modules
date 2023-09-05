/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:00:07 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/06 14:45:14 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include<iostream>
#include <cstdlib>

class Base
{
    public:
    virtual ~Base();
};

Base*   generate(void);
void    identify(Base *p);
void    identify(Base & p);

#endif