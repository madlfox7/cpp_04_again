NAME = interfaces
CC = c++
FLAGS = -Wall -Wextra -Werror  -std=c++98 #-Wshadow -Wno-shadow
SRC =  main.cpp AMateria.cpp Ice.cpp  Cure.cpp Character.cpp MateriaSource.cpp 
OBJS = $(SRC:.cpp=.o)


COLOR = \033[0;32m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(COLOR)Linking $@$(RESET)"
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp AMateria.hpp Ice.hpp ICharacter.hpp Cure.hpp Character.hpp MateriaSource.hpp IMateriaSource.hpp
	@echo "$(COLOR)Compiling $<$(RESET)"
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "$(COLOR)Removing object files$(RESET)"
	rm -rf $(OBJS)

fclean: clean
	@echo "$(COLOR)Removing $(NAME)$(RESET)"
	rm -rf $(NAME)

re: fclean all


.PHONY: all clean fclean re
