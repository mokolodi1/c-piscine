/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 14:51:25 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/09 19:44:40 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<stdlib.h>

int				*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *result_tab;

	result_tab = (int*)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		result_tab[i] = f(tab[i]);
		i++;
	}
	return (result_tab);
}
