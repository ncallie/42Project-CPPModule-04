/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:39:40 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/27 20:39:42 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_BRAIN_H
#define EX01_BRAIN_H


#include <string>
#include <iostream>

class Brain {
private:
    const static int size = 100;
    std::string ideas[size];

public:
    Brain();
    ~Brain();
    Brain(const Brain &other);
    Brain &operator = (const Brain &other);

    void fillIdeas(std::string name, std::string idea);
    void showIdeas();
};


#endif //EX01_BRAIN_H
