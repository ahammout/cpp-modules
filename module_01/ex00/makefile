# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/21 23:13:22 by ahammout          #+#    #+#              #
#    Updated: 2023/04/21 23:13:24 by ahammout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra - Werror

NAME = BraiiiiiiinnnzzzZ

INCLUDES = Zombie.hpp

SRCS =	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \

OBJS = $(SRCS:.cpp=.o)

%o : %.cpp $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $NAME
	@$(CC) $(CFLAGS) $


