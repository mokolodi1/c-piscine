#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/14 11:43:55 by tfleming          #+#    #+#              #
#    Updated: 2014/09/14 22:12:29 by tfleming         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = eval_expr

SRC_FLD = srcs
SRC = main.c			\
	eval_expr.c			\
	create_tokens.c		\
	operators.c			\
	list.c				\
	parse.c				\
	printing.c

OBJ = main.o			\
	eval_expr.o			\
	create_tokens.o		\
	operators.o			\
	list.o				\
	parse.o				\
	printing.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
