/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:39:56 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:39:58 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.h"

Animal::Animal() {
    std::cout << "Constructor Animal " << this << std::endl;
    this->type = "Animal";
}

Animal::~Animal() {
    std::cout << "Destructor Animal " << this << std::endl;
}

Animal::Animal(const Animal &other) {
    std::cout << "Constructor copy Animal " << this << std::endl;
    this->type = other.type;
}

Animal &Animal::operator = (const Animal &other) {
    std::cout << "Operator = Animal " << this << std::endl;
    this->type = other.type;
    return *this;
}

void Animal::makeSound() const{
    std::cout << "...(Animal)" << std::endl;
}

std::string Animal::getType() const{
    return this->type;
}

