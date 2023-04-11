CC = c++

CFLAGS = -Wall -Wextra -Werror

NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.c=.o)

$(NAME): all

all: $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all