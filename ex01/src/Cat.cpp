/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:37:12 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:37:14 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.h"

int Cat::count = 1;

Cat::~Cat() {
    std::cout << "Destructor Cat " << this << std::endl;
    delete this->brain;
}

void Cat::makeSound() const{
    std::cout << "Meow...Meow...Meow" << std::endl;
}

Cat::Cat() {
    std::cout << "Constructor Cat " << this << std::endl;
    brain = new Brain();
    brain->fillIdeas("Vasya" + std::to_string(count), "Wants to sleep (Cat)");
    count++;
    this->type = "Cat";
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Operator = Cat " << this << std::endl;
    this->brain = new Brain(*other.brain);
    this->type = other.type;
    return *this;
}

Cat::Cat(const Cat &other) {
    std::cout << "Constructor copy Cat " << this << std::endl;
    this->brain = new Brain(*other.brain);
    this->type = other.type;
}

void Cat::showIdeas() {
    brain->showIdeas();
}




