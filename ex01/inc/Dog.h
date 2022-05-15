/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:36:56 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/28 12:56:08 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_DOG_H
#define EX00_DOG_H


#include "Animal.h"
#include "Brain.h"
#include <iostream>

class Dog : public Animal {
public:
    Dog();
    Dog(const Dog &other);
    Dog &operator = (const Dog &other);
    ~Dog();

    void makeSound() const;
    void showIdeas();

private:
    static int count;
    Brain *brain;
};


#endif //EX00_DOG_H
