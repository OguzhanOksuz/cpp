NAME = a.out

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp		\
	   Animal.cpp	\
	   Dog.cpp		\
	   Cat.cpp		\
	   WrongCat.cpp	\
	   WrongAnimal.cpp	

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
