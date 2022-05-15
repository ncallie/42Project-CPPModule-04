/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:33:32 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:33:36 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.h"

WrongAnimal::WrongAnimal() {
    std::cout << "Constructor WrongAnimal" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    this->type = other.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    this->type = other.type;
    return *this;
}

std::string WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << "...(WrongAnimal)" << std::endl;
}
