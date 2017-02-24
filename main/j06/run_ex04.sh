# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_ex04.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/04 17:59:49 by tfleming          #+#    #+#              #
#    Updated: 2014/09/04 18:00:45 by tfleming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# compile
gcc -Wall -Wextra -Werror ../../j06/ex04/ft_sort_params.c ft_putchar.c

echo about to call with some parameters

# tests
echo
echo these are the parameters
./a.out these are the parameters

echo
echo some more parameters
./a.out some more parameters

echo
echo [no parameters]
./a.out

echo
echo done with testing

# delete a
rm a.out