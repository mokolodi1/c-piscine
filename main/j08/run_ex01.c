/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 23:08:02 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/08 12:25:46 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../j08/ex01/ft_boolean.h"
#include <stdio.h>

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

t_bool		ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int			main(int argc, char **argv)
{
	(void)argv;
	printf("about to call ft_is_even with %d\n", argc - 1);
	printf("is it even? %d\n", ft_is_even(argc - 1));
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}
