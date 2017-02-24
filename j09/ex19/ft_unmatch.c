/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 14:52:04 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 15:22:25 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		are_there_two(int *tab, int length, int testing)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (tab[i] == testing)
			count++;
		i++;
	}
	if (count == 2)
		return (1);
	return (0);
}

int		ft_unmatch(int *tab, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (are_there_two(tab, length, tab[i]) == 0)
			return (tab[i]);
		i++;
	}
	return (-1);
}
