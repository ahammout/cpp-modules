/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:48:01 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/11 18:57:58 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ScalarConverter.hpp"

//---***------------------------------------- CONSTRUCTORS ---------------------------------***---//

ScalarConverter::ScalarConverter()
{
    std::cout << "▷ Default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "◁  Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter &SRC)
{
    std::cout << "▷ Copy constructor called" << std::endl;
    *this = SRC;
}

//---***------------------------------------- OVERLOADING OPERATORS ---------------------------------***---//

ScalarConverter&    ScalarConverter::operator=(ScalarConverter &RightHand)
{
    (void) RightHand;
    return (*this);
}


//---***------------------------------ SCALARCONVERTER METHODS --------------------------***---//

//* convStat values:
//* 0: Normal case (Converted √)
//* 2(Float) 3(double): Pseudo literals input

void    display(Data *data)
{
    if (data->convStat == 0)
    {
        if (data->_char >= 32 && data->_char <= 126)
            std::cout << "Char: " << data->_char << std::endl;
        else
            std::cout << "Char: Non displayable" << std::endl;
        std::cout << "Int: " << data->_int << std::endl;
        if (data->inType == INT || data->inType == CHAR)
        {
            std::cout << "Float: " << data->_float << ".0f" << std::endl;
            std::cout << "Double: " << data->_double << ".0" << std::endl;
        }
        else
        {
            std::cout << "Float: " << data->_float << "f" << std::endl;
            std::cout << "Double: " << data->_double << std::endl;
        }
    }
    else if (data->convStat == 2 || data->convStat == 3)
    {
        std::cout << "Char: impossible" << std::endl;
        std::cout << "Int: impossible" << std::endl;
        if (!data->_input.compare("nanf") || !data->_input.compare("nan"))
        {
            std::cout << "Float: nanf" << std::endl;
            std::cout << "Double: nan" << std::endl;
        }
        else if (!data->_input.compare("+inff") || !data->_input.compare("+inf"))
        {
            std::cout << "Float: +inff" << std::endl;
            std::cout << "Double: +inf" << std::endl;
        }
        else if (!data->_input.compare("-inff") || !data->_input.compare("-inf"))
        {
            std::cout << "Float: -inff" << std::endl;
            std::cout << "Double: -inf" << std::endl;
        }
    }
}

void    fromFloat(Data *data)
{
    if (!data->_input.compare("-inff") || !data->_input.compare("+inff") || !data->_input.compare("nanf"))
        data->convStat = 2;
    else
    {
        data->_float = std::stof(data->_input);
        data->_double = std::stod(data->_input);
        data->_char = std::stoi(data->_input);
        data->_int = std::stoi(data->_input);
        data->convStat = 0;
    }
}

void    fromDouble(Data *data)
{
    if (!data->_input.compare("-inf") || !data->_input.compare("+inf") || !data->_input.compare("nan"))
        data->convStat = 3;
    else
    {
        data->_double = std::stod(data->_input);
        data->_float = std::stof(data->_input);
        data->_int = std::stoi(data->_input);
        data->_char = data->_int;
        data->convStat = 0;
    }
}

void fromChar(Data *data)
{
    data->_char = data->_input[0];
    data->_int = data->_input[0];
    data->_float = float(data->_int);
    data->_double = double(data->_int);
    data->convStat = 0;
}

void fromInt(Data *data)
{
    data->_int = std::stoi(data->_input);
    data->_char = data->_int;
    data->_float = static_cast<float>(data->_int);
    data->_double = static_cast<double>(data->_int);
    data->convStat = 0;
}

void converter(Data *data)
{
    if (data->inType == CHAR)
        fromChar(data);
    else if (data->inType == INT)
        fromInt(data);
    else if (data->inType == FLOAT)
        fromFloat(data);
    else if (data->inType == DOUBLE)
        fromDouble(data);
}

bool    isFloat(std::string input)
{
    int i;
    int s;

    s = 0;
    i = 0;
    if (!input.compare("-inff") || !input.compare("+inff") || !input.compare("nanf"))
        return (true);
    while (input[i])
    {
        if (input[i] == '-' || input[i] == '+')
            s++;
        if (!isdigit(input[i]) && input[i] != '.' && input[i] != 'f' && input[i] != '+' && input[i] != '-')
            return (false);
        i++;
    }
    if (s >= 1)
    {
        if (s > 1)
            throw std::exception();
       for (unsigned long i = 0; i < input.size(); i++)
       {
            if ((input[i] == '+' || input[i] == '-') && ((input[i-1] >= '0' && input[i-1] <= '9' ) && (input[i+1] >= '0' && input[i+1] <= '9' )))
                throw std::exception();
       }
    }
    return (true);
}

bool    isDouble(std::string input)
{
    int i;
    int s;

    i = 0;
    s = 0;
    if (!input.compare("-inf") || !input.compare("+inf") || !input.compare("nan"))
        return (true);
    while (input[i])
    {
        if (input[i] == '-' || input[i] == '+')
            s++;
        if (!isdigit(input[i]) && input[i] != '.' && input[i] != '+' && input[i] != '-')
            return (false);
        i++;
    }
    if (s >= 1)
    {
        if (s > 1)
            throw std::exception();
       for (unsigned long i = 0; i < input.size(); i++)
       {
            if ((input[i] == '+' || input[i] == '-') && ((input[i-1] >= '0' && input[i-1] <= '9' ) && (input[i+1] >= '0' && input[i+1] <= '9' )))
                throw std::exception();
       }
    }
    return (true);
}

bool    isInt(std::string input)
{
    int i;
    int s;

    s = 0;
    i = 0;
    while (input[i])
    {
        if (input[i] == '-' || input[i] == '+')
            s++;
        if (!isdigit(input[i]) && input[i] != '+' && input[i] != '-')
            return (false);
        i++;
    }
    if (s >= 1)
    {
        if (s > 1)
            throw std::exception();
        for (unsigned long i = 0; i < input.size(); i++)
        {
            if ((input[i] == '+' || input[i] == '-') && ((input[i-1] >= '0' && input[i-1] <= '9' ) && (input[i+1] >= '0' && input[i+1] <= '9' )))
                throw std::exception();
        }
    }
    return (true);
}

bool    isChar(std::string input)
{
    if (input.length() == 1)
    {
        if (((input[0] >= 'a' && input[0] <= 'z') \
            || (input[0] >= 'A' && input[0] <= 'Z')) \
            && (!(input[0] >= '0' && input[0] <= '9')))
            return (true);
    }
    return (false);
}

bool isDisplayable(char c)
{
    if (c >= 33 && c <= 126)
        return (true);
    return (false);
}

void    ScalarConverter::convert(std::string input)
{
    Data data;

    try
    {
        data._input = input;
        if (isChar(input))
            data.inType = CHAR;
        else if (isInt(input))
            data.inType = INT;
        else if (isDouble(input))
            data.inType = DOUBLE;
        else if (isFloat(input))
            data.inType = FLOAT;
        else
        {
            data.inType = -1;
            throw std::exception();
        }
        converter(&data);
        display(&data);
    }
    catch (std::exception const &e)
    {
        std::cout << "╳: Bad input!" << std::endl;
    }
    catch (...)
    {
        std::cout << "╳: enexpected error!" << std::endl;
    }
}
