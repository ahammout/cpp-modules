/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:38:59 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/11 16:26:03 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ScalarConverter.hpp"

//* CASTING TYPE USED: Static cast.

int main(int ac, char **av)
{
    if (ac == 2)
        ScalarConverter::convert(av[1]);
    return (0);
}
