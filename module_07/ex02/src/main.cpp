#include <iostream>
#include "../includes/Array.hpp"

void    f()
{
    system("leaks array");
}

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    
    atexit(f);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    //----------SCOPE THE TEST THE OVERLOADING OPERATOR, AND THE COPY CONSTRUCTOR -----------/
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    //----------- DISPLAY THE ARRAY ------------/
    for (unsigned int i = 0; i < numbers.getSize(); i ++)
        std::cout << numbers[i] << std::endl;

    //----------- TRYING INVALID INDEX ------------/

    try
    {
        numbers[-2] = 0;
    }
    catch(Array<int>::OutOfTheBond& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(Array<int>::OutOfTheBond& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    delete [] mirror;//
    return 0;
}