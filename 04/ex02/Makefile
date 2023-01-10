NAME =	animal

HEADER = includes/

SRCS =	src/main.cpp src/Animal.cpp src/Cat.cpp src/Dog.cpp src/Brain.cpp

OBJS =	${SRCS:.cpp=.o}

FLAGS =	-I $(HEADER) -Wall -Wextra -Werror -std=c++98

all:		${NAME}

%.o: 	%.cpp
	c++ ${FLAGS} -c $< -o $@


${NAME}:	${OBJS}
	c++ ${FLAGS} ${OBJS} -o ${NAME}

clean:		${OBJS}
	@ rm -rf ${OBJS}

fclean:		clean
	@ rm -rf ${NAME}

re:			fclean
	@ make all

.PHONY	:	all clean fclean re