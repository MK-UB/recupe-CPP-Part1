NAME = diamondtrap

SRC =  ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

C++ = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

HEADERS = FragTrap.hpp ClapTrap.hpp ScavTrap.hpp

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