# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 01:49:39 by melayoub          #+#    #+#              #
#    Updated: 2023/11/20 01:49:40 by melayoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed

SRC = Fixed.cpp main.cpp

C++ = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

HEADERS = Fixed.hpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(C++) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all