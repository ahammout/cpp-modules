# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 18:06:29 by ahammout          #+#    #+#              #
#    Updated: 2023/05/08 17:42:07 by ahammout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

INCLUDES =	PhoneBook.hpp \
			Contact.hpp \

SRCS =	main.cpp \
		PhoneBook.cpp \
		Contact.cpp \
		utils.cpp \

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp  $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all