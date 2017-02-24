/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 14:37:00 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 15:35:21 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			"ft_perso.h"

int					count_pipes(char *str)
{
	int n;

	while (*str)
	{
		if (*str == '|')
			n++;
		str++;
	}
	return (n);
}



t_perso				**ft_decrypt(char *str)
{
	t_perso		**people;
	int			people_count;
	int			i;

	people_count = count_pipes(str) + 1;
	people = malloc(sizeof(s_perso) * people_count);
	i = 0;
	while (str[i])
	{
		str++;
	}
	return (NULL);
}
