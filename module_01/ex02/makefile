CC = c++

CFLAGS = -Wall -Wextra -Werror

NAME = ThisIsBrain

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

%o : %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all


