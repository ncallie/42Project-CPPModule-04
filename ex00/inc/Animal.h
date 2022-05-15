/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:32:41 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:33:09 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_ANIMAL_H
#define EX00_ANIMAL_H


#include <string>
#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal &other);
    virtual ~Animal();
    Animal &operator = (const Animal &other);

    virtual void makeSound() const;
    std::string getType() const;
};


#endif //EX00_ANIMAL_H
