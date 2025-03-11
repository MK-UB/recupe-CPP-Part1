NAME = scavtrap

SRC =  ClapTrap.cpp main.cpp ScavTrap.cpp

C++ = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

HEADERS = ClapTrap.hpp ScavTrap.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME) 

%.o : %.cpp $(HEADERS)
	$(C++) -Wall -Wextra -Werror -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all