NAME = abstr
CC = c++
FLAGS = -Wall -Wextra -Werror  -Wshadow -Wno-shadow  -std=c++98
SRC =  main.cpp AAnimal.cpp WrongAnimal.cpp Dog.cpp Cat.cpp WrongCat.cpp Brain.cpp
OBJS = $(SRC:.cpp=.o)


COLOR = \033[0;32m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(COLOR)Linking $@$(RESET)"
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp AAnimal.hpp WrongAnimal.hpp Dog.hpp Cat.hpp WrongCat.hpp Brain.hpp 
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
