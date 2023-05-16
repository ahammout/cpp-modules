/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:12:23 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 20:31:50 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include<iostream>

class   Harl
{
    private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

    public:
    Harl();
    void complain(std::string level);
    ~Harl();
};

typedef void    (Harl::*ptrF)(void);

#endif