# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 00:05:39 by melayoub          #+#    #+#              #
#    Updated: 2023/11/13 01:14:04 by melayoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Attack

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

C++ = c++
	FLAGS = -Wall -Wextra -Werror -std=c++98
	RM = rm -rf
	HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

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