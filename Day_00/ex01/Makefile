NAME = my_phonebook
SOURCE = $(shell find source -name '*.cpp')
HEAD = $(shell find headers -name '*.hpp')
OBJS = $(SOURCE:.cpp=.o)
FLAGS = -std=c++98 -Wall -Wextra -Werror -g -I.

all: $(NAME)

$(NAME): $(OBJS) $(HEAD)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re