NAME =	iter

HEADER = 

SRCS =	main.cpp

OBJS =	${SRCS:.cpp=.o}

FLAGS =	-I $(HEADER) -Wall -Wextra -Werror -std=c++98

all:		${NAME}

%.o: 	%.cpp
	@ g++ ${FLAGS} -c $< -o $@


${NAME}:	${OBJS}
	@ g++ ${FLAGS} ${OBJS} -o ${NAME}

clean:		${OBJS}
	@ rm -rf ${OBJS}

fclean:		clean
	@ rm -rf ${NAME}

re:			fclean
	@ make all

.PHONY	:	all clean fclean re