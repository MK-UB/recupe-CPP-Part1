# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melayoub <melayoub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 14:06:04 by melayoub          #+#    #+#              #
#    Updated: 2023/11/10 17:09:00 by melayoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC = PhoneBook.cpp \
		Contact.cpp \
		main.cpp
	
C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
HEADERS = Contact.hpp PhoneBook.hpp

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