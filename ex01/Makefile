CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = animals
SRC =  main.cpp \
	src/Animal.cpp \
	src/Dog.cpp \
	src/Cat.cpp \
	src/Brain.cpp \
	src/WrongAnimal.cpp \
	src/WrongCat.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)
%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re