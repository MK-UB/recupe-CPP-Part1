
NAME = Inter

SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

C++ = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

HEADERS = AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp Ice.hpp MateriaSource.hpp


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