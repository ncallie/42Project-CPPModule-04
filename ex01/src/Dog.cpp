/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:37:16 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:37:19 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Dog.h"

int Dog::count = 1;

Dog::~Dog() {
    std::cout << "Destructor Dog " << this << std::endl;
    delete this->brain;
}

void Dog::makeSound() const{
    std::cout << "Woof...Woof...Woof" << std::endl;
}

Dog::Dog() {
    std::cout << "Constructor Dog " << this << std::endl;
    brain = new Brain();
    brain->fillIdeas("Ruby" + std::to_string(count), "Wants to play (Dog)");
    count++;
    this->type = "Dog";
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Operator = Dog " << this << std::endl;
    this->brain = new Brain(*other.brain);
    this->type = other.type;
    return *this;
}

Dog::Dog(const Dog &other) {
    std::cout << "Constructor copy Dog " << this << std::endl;
    this->brain = new Brain(*other.brain);
    this->type = other.type;
}

void Dog::showIdeas() {
    brain->showIdeas();
}


