/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:32:29 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:32:32 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WRONGANIMAL_H
#define EX00_WRONGANIMAL_H


#include <string>
#include <iostream>

class WrongAnimal {
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator = (const WrongAnimal &other);
    std::string getType() const;
    void makeSound() const;

protected:
    std::string type;
};


#endif //EX00_WRONGANIMAL_H
