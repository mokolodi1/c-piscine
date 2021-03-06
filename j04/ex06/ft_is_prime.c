/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 23:12:05 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/02 18:35:55 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb && i * i > 0)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
