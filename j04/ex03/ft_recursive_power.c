/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 18:28:29 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/02 18:32:02 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0 || (power == 0 && nb == 0))
		return (0);
	if (power == 0)
	{
		if (nb < 0)
			return (-1);
		else
			return (1);
	}
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
