/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:13:18 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 19:04:47 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fed.hpp"

Fed::Fed() {}

Fed::~Fed() {}

std::string replace(std::string str, std::string word1, std::string word2)
{
    int pos;

    pos = str.find(word1, pos);
    while (pos != std::string::npos)
    {
        str.erase(pos, word1.length());
        str.insert(pos, word2);
        pos += word2.length();
        pos = str.find(word1, pos);
    }
    return (str);
}

bool    Fed::fileTransform(char **av)
{
    std::string tmp;
    std::string filename;
    std::string s1;
    std::string s2;
    int         i;

    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    infile.open(filename, std::ios::in);
    if (infile.is_open() == false)
        return(puts("No such file"), false);
    filename.append(".replace");
    outfile.open(filename, std::ios::out);
    if (outfile.is_open() == false)
        return(puts("No such file"), false);
    while (getline(infile, tmp, '\0'))
    {
        if (!s1.empty())
            tmp = replace(tmp, s1, s2);
        outfile << tmp;
        tmp.erase();
    }
    infile.close();
    outfile.close();
    return (true);
}