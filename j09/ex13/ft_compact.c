/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 13:48:17 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 14:15:22 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

void		copy_char_array(char **tab, char **new, int length, int new_size)
{
	int i;

	i = 0;
	while (i < new_size)
	{
		tab[i] = new[i];
		i++;
	}
	while (i < length)
	{
		i++;
		tab[i] = NULL;
	}
}

int			ft_compact(char **tab, int length)
{
	int		tab_i;
	int		new_i;
	char	*new_one[length];

	tab_i = 0;
	new_i = 0;
	while (tab_i < length)
	{
		if (tab[tab_i] != NULL)
		{
			new_one[new_i] = tab[tab_i];
			new_i++;
		}
		tab_i++;
	}
	copy_char_array(tab, new_one, length, new_i);
	return (new_i);
}
