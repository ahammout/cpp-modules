/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:41:11 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 17:32:37 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fed.hpp"

int main(int ac, char **av)
{
    Fed Fed;
    
    if (ac != 4)
        return (puts(" > USAGE: ./Fed [File] [word1] [word2]"), 1);
    Fed.fileTransform(av);
    return (0);
}