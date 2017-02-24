#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/13 22:04:58 by tfleming          #+#    #+#              #
#    Updated: 2014/09/14 19:21:35 by tfleming         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = colle-2

SRC_FLD = srcs
SRC = main.c			\
	identify_shapes.c	\
	shape_utils.c		\
	utils.c				\
	identify_colle.c	\
	colles_utils.c

OBJ = main.o			\
	identify_shapes.o	\
	shape_utils.o		\
	utils.o				\
	identify_colle.o	\
	colles_utils.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all