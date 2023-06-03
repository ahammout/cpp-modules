# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 13:32:39 by ahammout          #+#    #+#              #
#    Updated: 2023/06/03 21:32:59 by ahammout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zooo

INCLUDES = Animal.hpp Cat.hpp Dog.hpp Brain.hpp WrongBrain.hpp WrongAnimal.hpp WrongCat.hpp

SRCS =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp \
		WrongBrain.cpp \

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all