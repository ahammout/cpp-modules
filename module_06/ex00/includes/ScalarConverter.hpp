/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:39:53 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/11 18:59:19 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include<iostream>
#include<cctype>

enum {
    INT,
    CHAR,
    FLOAT,
    DOUBLE
};

struct Data
{
    std::string _input;
    int         convStat;
    int         inType;
    int         _int;
    char        _char;
    float       _float;
    double      _double;
};

class ScalarConverter
{
    private:
    ScalarConverter();
    ScalarConverter(std::string input);
    ScalarConverter(ScalarConverter &SRC);

    public:

    ~ScalarConverter();
    ScalarConverter&    operator=(ScalarConverter &RightHand);
    static void    convert(std::string input);
};

#endif