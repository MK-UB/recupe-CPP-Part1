NAME = Poly

SRC =  Animal.cpp main.cpp Cat.cpp Dog.cpp \
	WrongAnimal.cpp WrongCat.cpp Brain.cpp

C++ = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

HEADERS = Animal.hpp Cat.hpp Dog.hpp \
		WrongAnimal.hpp WrongCat.hpp Brain.hpp

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