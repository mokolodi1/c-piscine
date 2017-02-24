/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 17:01:08 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/01 18:28:04 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int total;

	if (power < 0 || (power == 0 && nb == 0))
		return (0);
	if (power == 0)
	{
		if (nb < 0)
			return (-1);
		else
			return (1);
	}
	i = 0;
	total = 1;
	while (i < power)
	{
		total *= nb;
		i++;
	}
	return (total);
}
