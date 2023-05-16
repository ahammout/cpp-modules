/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:28:31 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/16 16:02:31 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

std::string to_upper(std::string input)
{
    int i;

    i = 0;
    while (input[i])
    {
        if (input[i] >= 'a' && input[i] <= 'z')
            input[i] = toupper(input[i]);
        i++;
    }
    return (input);
}

int main(int ac, char **av)
{
    Harl        harl;
    std::string input;

    if (ac != 2)
        return (puts("ENTER A LEVEL: { [DEBUG]  -  [INFO]  -  [WARNING]  -  [ERROR] }"), 1);
    input = to_upper(av[1]);
    harl.complain(input);
    return (0);
}