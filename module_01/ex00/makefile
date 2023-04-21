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


