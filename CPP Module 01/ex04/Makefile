# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 15:51:26 by melayoub          #+#    #+#              #
#    Updated: 2023/11/15 14:38:31 by melayoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Replace

SRC = main.cpp x.cpp

C++ = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C++) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all