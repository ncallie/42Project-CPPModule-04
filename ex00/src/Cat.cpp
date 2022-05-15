/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:33:19 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:33:21 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.h"

Cat::~Cat() {
    std::cout << "Destructor Cat" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Meow...Meow...Meow" << std::endl;
}

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Constructor Cat" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    this->type = other.type;
    return *this;
}

Cat::Cat(const Cat &other) {
    this->type = other.type;
}
