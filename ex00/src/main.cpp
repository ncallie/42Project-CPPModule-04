/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:33:28 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:33:29 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Animal.h"
#include "../inc/Dog.h"
#include "../inc/Cat.h"
#include "../inc/WrongAnimal.h"
#include "../inc/WrongCat.h"

int main()
{
    std::cout << "===========Point=========" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << "==========Meaning=========" << std::endl;
    Animal test1;
    Dog test2;
    test1 = test2;
    test1.makeSound();
    Animal test3(test2);
    test3.makeSound();
    std::cout << "=========Reference========" << std::endl;
    Animal &test4 = test2;
    test4.makeSound();
    std::cout << "========Destructor========" << std::endl;
    delete i;
    delete j;
    delete meta;
    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << "===========Point=========" << std::endl;
    WrongAnimal *wrongAnimal = new WrongAnimal();
    WrongAnimal *wrongAnimal1 = new WrongCat();
    wrongAnimal->makeSound();
    wrongAnimal1->makeSound();
    std::cout << "==========Meaning=========" << std::endl;
    WrongAnimal wrongAnimal2;
    WrongCat wrongCat;
    wrongAnimal2 = wrongCat;
    wrongAnimal2.makeSound();
    WrongAnimal wrongAnimal3(wrongCat);
    wrongAnimal3.makeSound();
    std::cout << "=========Reference========" << std::endl;
    WrongAnimal &wrongAnimal4 = wrongCat;
    wrongAnimal4.makeSound();
    std::cout << "========Destructor========" << std::endl;
    delete wrongAnimal;
    delete wrongAnimal1;
    std::cout << "---------------------------------------------------------" << std::endl;
    return 0;
}
