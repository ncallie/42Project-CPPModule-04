/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:32:51 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/28 12:57:32 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_DOG_H
#define EX00_DOG_H

#include <iostream>
#include "Animal.h"

class Dog : public Animal {
public:
    Dog();
    Dog(const Dog &other);
    Dog &operator = (const Dog &other);
    ~Dog();
    void makeSound() const;
};


#endif //EX00_DOG_H
