CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude/

SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Animal

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32mCompiled\033[0m"

re : fclean all

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)