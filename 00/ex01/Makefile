# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 11:04:21 by zpalfi            #+#    #+#              #
#    Updated: 2022/10/10 12:40:44 by zpalfi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook

SRC			=	main.cpp \
				PhoneBook.cpp \
				Contact.cpp
				
OBJ			=	$(SRC:.cpp=.o)

CC				=	g++
# CFLAGS			=	-Wall -Wextra -Werror -std=c++98

%.o:	%.cpp
		$(CC) -o $@ -c $<

$(NAME)		:	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)
					
all			:	$(NAME)

clean		:
		@rm -rf *.o

fclean		:	clean
		@rm -rf $(NAME)

re			:	fclean	all

.PHONY		:	all clean fclean re