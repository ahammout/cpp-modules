/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:58:41 by ahammout          #+#    #+#             */
/*   Updated: 2023/06/02 10:23:38 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"

#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal;
    const Animal* j = new Dog;
    const Animal* i = new Cat;
    
    std::cout << "\n*********** GETTING TYPES ************" << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << "\n*********** MAKING SOUNDS ************" << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound(); //will output the cat sound!
    std::cout << "\n/-----------------------------------------------------/" << std::endl;

    delete meta;
    delete j;
    delete i;

    std::cout << "\n/------------------- WRONG TEST ---------------------/\n" << std::endl;

    const WrongAnimal* A = new WrongAnimal;
    const WrongAnimal* C = new WrongCat;
    
    std::cout << "\n*********** GETTING TYPES ************" << std::endl;
    std::cout << A->getType() << " " << std::endl;
    std::cout << C->getType() << " " << std::endl;
    
    std::cout << "\n*********** MAKING SOUNDS ************" << std::endl;
    A->makeSound();
    C->makeSound(); //will output the Animal sound!
    std::cout << "\n/-----------------------------------------------------/" << std::endl;

    delete A;
    delete C;

    return 0;
}