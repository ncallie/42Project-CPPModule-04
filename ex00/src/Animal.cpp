/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:33:14 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:33:17 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.h"

Animal::Animal() {
    this->type = "Animal";
    std::cout << "Constructor Animal" << std::endl;
}

Animal::~Animal() {
    std::cout << "Destructor Animal" << std::endl;
}

Animal::Animal(const Animal &other) {
    this->type = other.type;
}

Animal &Animal::operator = (const Animal &other) {
    this->type = other.type;
    return *this;
}

void Animal::makeSound() const{
    std::cout << "...(Animal)" << std::endl;
}

std::string Animal::getType() const{
    return this->type;
}

