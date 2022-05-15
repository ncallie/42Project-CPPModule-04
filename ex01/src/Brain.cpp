/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:37:08 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:37:10 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.h"

Brain::Brain() {
    std::cout << "Constructor Brain " << this << std::endl;
}

void Brain::showIdeas() {
    for (int i = 0; i < 1; i++) {
        std::cout << ideas[i] << std::endl;
    }
}

void Brain::fillIdeas(std::string name, std::string idea) {
    for (int i = 0; i < size; ++i) {
        ideas[i] = name + " - " + idea;
    }
}

Brain::~Brain() {
    std::cout << "Destructor Brain " << this << std::endl;
}

Brain::Brain(const Brain &other) {
    std::cout << "Constructor copy Brain " << this << std::endl;
    for (int i = 0; i < size; i++) {
        this->ideas[i] = other.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Operator = Brain " << this << std::endl;
    for (int i = 0; i < size; i++) {
        this->ideas[i] = other.ideas[i];
    }
    return *this;
}
