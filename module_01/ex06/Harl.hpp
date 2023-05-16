/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:30:45 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 21:29:42 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include<iostream>
#include<string>

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