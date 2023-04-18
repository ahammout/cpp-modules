/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 02:31:53 by ahammout          #+#    #+#             */
/*   Updated: 2023/04/18 00:34:55 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;
    char holder;

    i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                if (av[i][j] >= 97 && av[i][j] <= 122)
                {
                    holder = toupper(av[i][j]);
                    std::cout << holder;
                }
                else
                    std::cout << av[i][j];
                j++;
            }
            i++;
        }
    }
    std::cout << "\n";
    return (0);
}