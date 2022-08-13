NAME = Serialization
SOURCE = $(shell find . -name '*.cpp')
OBJS = $(SOURCE:.cpp=.o)
HEAD = $(shell find . -name '*.hpp')
FLAGS = -std=c++98 -Wall -Wextra -Werror -g3 -I.

all: $(NAME)

$(NAME): $(OBJS) $(HEAD)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re