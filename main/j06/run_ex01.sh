# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_ex01.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/04 12:55:08 by tfleming          #+#    #+#              #
#    Updated: 2014/09/04 13:00:30 by tfleming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# compile
gcc -Wall -Wextra -Werror ../../j06/ex01/ft_print_program_name.c ft_putchar.c

# run
./a.out

# delete a
rm a.out