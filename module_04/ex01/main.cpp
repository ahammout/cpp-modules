/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:58:41 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/02 10:17:48 by ahammout         ###   ########.fr       */
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
    int index;

    index = 0;

    std::cout << "\n*************** TEST 1: SIMPLE POINTER TO OBJECT ***************" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    
    std::cout << "\n*************** TEST 2: ARRAY OF OBJECTS ***************" << std::endl;
    Animal* animals[6] = {new Dog(), new Cat(), new Dog(), new Cat()};
    while (index < 6)
    {
        delete animals[index];
        index++;
    }

    std::cout << "\n*************** TEST 3: DEEP COPY TEST ***************" << std::endl;
    Dog Basic;
    {
        Dog tmp = Basic;
    }
    return (0);
}