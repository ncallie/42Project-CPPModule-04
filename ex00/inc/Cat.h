/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:32:46 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/28 12:57:22 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_CAT_H
#define EX00_CAT_H


#include "Animal.h"
#include <iostream>

class Cat : public Animal{
public:
    Cat();
    Cat(const Cat &other);
    Cat &operator = (const Cat &other);
    ~Cat();

    void makeSound() const;
};


#endif //EX00_CAT_H
