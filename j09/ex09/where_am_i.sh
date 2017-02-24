# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/12 11:58:08 by tfleming          #+#    #+#              #
#    Updated: 2014/09/12 14:02:52 by tfleming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IPS=$(ifconfig | grep "inet " | egrep -o "([0-9]{1,3}[\.]){3}[0-9]{1,3}" | grep -v "127.0.0.1")
if [[ -z $IPS ]]; then
	echo Je suis perdu!
else
	ifconfig | grep "inet " | egrep -o "([0-9]{1,3}[\.]){3}[0-9]{1,3}" | grep -v "127.0.0.1" | grep -v "255.255"
fi