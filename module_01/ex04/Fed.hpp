/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:43:00 by ahammout          #+#    #+#             */
/*   Updated: 2023/05/15 17:33:51 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FED_HPP
#define FED_HPP

#include<iostream>
#include<fstream>
#include<string>

class Fed
{
    private:
    std::fstream infile;
    std::fstream outfile;
    
    public:
    Fed();
    bool    fileTransform(char **av);
    ~Fed();
};

std::string replace(std::string str, std::string word1, std::string word2);
#endif