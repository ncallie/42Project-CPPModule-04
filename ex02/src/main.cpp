/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:40:15 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/28 13:00:20 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Animal.h"
#include "../inc/Dog.h"

int main() {
	// Animal ani1;
	// Animal ani = new Animal();
    Animal *animal = new Dog();
    animal->makeSound();
    animal->getType();
    delete animal;
    return 0;
}
