#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmullier <nmullier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/08 11:18:19 by nmullier          #+#    #+#              #
#    Updated: 2014/09/09 11:12:24 by nmullier         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SOURCES = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_swap.c ./srcs/ft_strlen.c

HEADER = -I/includes

all: $(NAME)

$(NAME): 
	gcc -c $(SOURCES) $(HEADER)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o ft_strlen.o

clean: 
	rm -f *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re