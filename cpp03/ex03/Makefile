CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude/

SRC = main.cpp src/ClapTrap.cpp src/ScavTrap.cpp src/FragTrap.cpp src/DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

NAME = DiamondTrap

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32mCompiled\033[0m"

re : fclean all

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)