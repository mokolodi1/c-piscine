# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_ex03.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/04 13:13:11 by tfleming          #+#    #+#              #
#    Updated: 2014/09/04 13:14:46 by tfleming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# compile
gcc -Wall -Wextra -Werror ../../j06/ex03/ft_rev_params.c ft_putchar.c

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