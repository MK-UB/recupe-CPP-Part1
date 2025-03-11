# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 22:12:01 by admin             #+#    #+#              #
#    Updated: 2023/11/10 17:09:19 by melayoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp	
C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	C++ $(FLAGS) $(OBJ) -o $(NAME) 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all