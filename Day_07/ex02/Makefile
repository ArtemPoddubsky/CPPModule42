NAME = Array
SOURCE = $(shell find . -name '*.cpp')
OBJS = $(SOURCE:.cpp=.o)
FLAGS = -std=c++98 -Wall -Wextra -Werror -MMD
DEPENDS = ${OBJS:.o=.d}

.PHONY: all clean fclean re

all: $(NAME)

$(OBJS): $(SOURCE)
	c++ $(FLAGS) -c $(SOURCE) -o $(OBJS)

$(NAME) : $(OBJS)
	c++ $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	@rm -rf $(DEPENDS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

-include ${DEPENDS}
