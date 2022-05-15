/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:33:39 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:47:57 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.h"

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << "Constructor WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
    this->type = other.type;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor WrongCat" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    this->type = other.type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Wrong-Meow...Wrong-Meow...Wrong-Meow" << std::endl;
}

std::string WrongCat::getType() const {
    return this->type;
}
