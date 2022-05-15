/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:32:58 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:33:02 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WRONGCAT_H
#define EX00_WRONGCAT_H

#include <iostream>
#include "WrongAnimal.h"

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat &operator = (const WrongCat &other);
    void makeSound() const;
    std::string getType() const;
};


#endif //EX00_WRONGCAT_H
