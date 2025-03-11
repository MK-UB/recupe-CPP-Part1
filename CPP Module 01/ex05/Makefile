# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 16:54:41 by melayoub          #+#    #+#              #
#    Updated: 2023/11/12 17:58:11 by melayoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRC = Harl.cpp main.cpp

C++ = c++
	FLAGS = -Wall -Wextra -Werror -std=c++98
	RM = rm -rf
	HEADER = Harl.hpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(C++) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all