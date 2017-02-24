/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 15:25:13 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 16:02:15 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

int			count_thingies(char **tab)
{
	int outer;
	int inner;
	int count;

	outer = 0;
	count = 0;
	while (tab[outer])
	{
		inner = 0;
		while (tab[outer][inner])
		{
			inner++;
			count++;
		}
		count++;
		outer++;
	}
	return (count - 1);
}

char		*ft_join(char **tab, char *sep)
{
	char	*new;
	int		outer;
	int		inner;
	int		new_i;
	int		count;

	count = count_thingies(tab);
	new = malloc((count + 1) * sizeof(char));
	outer = 0;
	new_i = 0;
	while (tab[outer])
	{
		inner = 0;
		while (tab[outer][inner])
		{
			new[new_i] = tab[outer][inner];
			new_i++;
			inner++;
		}
		new[new_i] = *sep;
		new_i++;
		outer++;
	}
	new[count] = '\0';
	return (new);
}
