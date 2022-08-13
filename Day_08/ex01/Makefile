NAME = Span
SOURCE = $(shell find . -name '*.cpp')
HEADER = $(shell find . -name '*.hpp')
OBJS = $(SOURCE:.cpp=.o)
FLAGS = -std=c++98 -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(SOURCE) $(HEADER)
	c++ $(FLAGS) -c $(SOURCE)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
