# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 18:06:29 by ahammout          #+#    #+#              #
#    Updated: 2023/04/18 02:46:01 by ahammout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror

NAME = PhoneBook

INCLUDES = PhoneBook.hpp

SRCS =	main.cpp \
		PhoneBook.cpp \

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o <@

$(NAME): all

all: $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(INCLUDES) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all