# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncallie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 15:18:31 by ncallie           #+#    #+#              #
#    Updated: 2022/03/27 20:47:08 by ncallie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all fclean clean re

NAME     =	ex02
SRC      =	./src/Animal.cpp ./src/Brain.cpp ./src/Cat.cpp ./src/Dog.cpp ./src/main.cpp
OBJ      =	$(SRC:.cpp=.o)
HDR      =	./inc/Animal.h ./inc/Brain.h ./inc/Cat.h ./inc/Dog.h
CC       =	c++
FLAGS =	-Wall -Wextra -Werror -std=c++98

.PHONY:		all clean fclean re 
all:		$(NAME)

$(NAME):	$(OBJ) 
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp	$(HDR)
			$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all