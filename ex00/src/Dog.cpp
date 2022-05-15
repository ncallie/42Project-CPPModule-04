/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:33:24 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:33:26 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.h"

Dog::~Dog() {
    std::cout << "Destructor Dog" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Woof...Woof...Woof" << std::endl;
}

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog(const Dog &other) {
    this->type = other.type;
}

Dog &Dog::operator=(const Dog &other) {
    this->type = other.type;
    return *this;
}


