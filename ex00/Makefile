FILES = main.cpp Fixed.cpp 

OBJS = $(FILES:.cpp=.o)

CC = c++

NAME = fixed

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp Fixed.hpp
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all