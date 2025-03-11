# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 18:07:32 by melayoub          #+#    #+#              #
#    Updated: 2023/11/12 18:07:34 by melayoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

C++ = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

HEADERS = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	C++ $(FLAGS) $(OBJ) -o $(NAME) 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all