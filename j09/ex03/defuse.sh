# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/11 21:16:40 by tfleming          #+#    #+#              #
#    Updated: 2014/09/12 13:57:19 by tfleming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

touch -A -000001 bomb.txt | stat -t %X -t %s -f %a  bomb.txt
