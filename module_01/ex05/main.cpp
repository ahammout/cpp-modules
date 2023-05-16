/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:12:17 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 19:10:18 by ahammout         ###   ########.fr       */
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

int main(void)
{
    Harl    harl;
    std::string input;

    std::cout << " LEVELS: { [DEBUG]  -  [INFO]  -  [WARNING]  -  [ERROR] }" << '\n';
    while (1)
    {
        std::cout << "> ";
        getline (std::cin, input);
        input = to_upper(input);
        if (input.compare("EXIT") == 0 || std::cin.eof())
            break;
        harl.complain(input);
    }
    return (0);
}