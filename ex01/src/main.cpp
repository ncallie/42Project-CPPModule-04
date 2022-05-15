/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:37:21 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/28 12:23:16 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Dog.h"
#include "../inc/Brain.h"
#include "../inc/Cat.h"


int main() {
    std::cout << "--------------------Point--------------------------" << std::endl;
    Cat *cat1 = new Cat();
    std::cout << "=============================" << std::endl;
    Cat *cat2 = new Cat(*cat1);
    std::cout << "=============================" << std::endl;
    cat2->showIdeas();
    delete cat2;
    delete cat1;
    std::cout << "-----------------------------------------------------" << std::endl;
    Cat cat3;
    std::cout << "=============================" << std::endl;
    Cat cat4(cat3);
    std::cout << "=============================" << std::endl;
    cat4.showIdeas();
    std::cout << "=============================" << std::endl;
    Cat cat5;
    cat5 = cat3;
    std::cout << "=============================" << std::endl;
    cat5.showIdeas();
    std::cout << "-----------------------------------------------------" << std::endl;
    const Animal* j = new Dog();
    std::cout << "=============================" << std::endl;
    const Animal* i = new Cat();
    std::cout << "=============================" << std::endl;
    delete j;
    std::cout << "=============================" << std::endl;
    delete i;
    std::cout << "-----------------------------------------------------" << std::endl;
	Animal *animals[4];
	for (int i = 0; i < 4; i++) {
		std::cout << "=========Create===========" << std::endl;
		if (i % 2){
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}
	std::cout << "=========makeSound===========" << std::endl;
	for (int i = 0; i < 4; i++) {
		animals[i]->makeSound();
	}
	for (int i = 0; i < 4; i++) {
		std::cout << "=========Delete===========" << std::endl;
		delete animals[i];
	}
	std::cout << "-----------------------------------------------------" << std::endl;
    return 0;
}
