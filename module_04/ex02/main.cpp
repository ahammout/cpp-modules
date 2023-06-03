/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:58:41 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/02 10:19:28 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
#include"Brain.hpp"

#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
#include"WrongBrain.hpp"

int main()
{
    int i;

    i = 0;
    std::cout << "\n-------------------- TEST 1: SIMPLE TESTS----------------------\n" << std::endl;
    Cat cat;
    Dog dog;

    std::cout << cat.getType() << std::endl;
    cat.makeSound();    
    std::cout << dog.getType() << std::endl;
    dog.makeSound();

    std::cout << "\n--------------------- Valid test: ARRAY OF POINTER TO OBJECTS ---------------------\n" << std::endl;

    Animal* animals[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
    while (i < 6)
    {
        delete animals[i];
        i++;
    }
    return (0);
}