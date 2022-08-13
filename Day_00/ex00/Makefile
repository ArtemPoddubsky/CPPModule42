NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -std=c++98 -Wall -Wextra -Werror -I.

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re