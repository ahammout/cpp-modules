# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 01:43:17 by ahammout          #+#    #+#              #
#    Updated: 2023/05/09 00:49:30 by ahammout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = MoarBrainzzz

INCLUDES = Zombie.hpp

SRCS =	main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp \

OBJS = $(SRCS:.cpp=.o)

%o : %.cpp $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

