/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 21:21:31 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/02 18:33:12 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		bin_sqrt(int nb, int low, int high)
{
	int guess;

	if (low + 1 == high)
		return (0);
	guess = (low + high) / 2;
	if (guess * guess == nb)
		return (guess);
	if (guess * guess < nb)
		return (bin_sqrt(nb, guess, high));
	else
		return (bin_sqrt(nb, low, guess));
}

int		ft_sqrt(int nb)
{
	if (nb < 1)
		return (0);
	return (bin_sqrt(nb, 0, 46341));
}
