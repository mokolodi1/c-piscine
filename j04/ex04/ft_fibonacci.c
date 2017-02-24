/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 18:54:46 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/02 18:10:05 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
	{
		if (index == 0)
			return (0);
		else
			return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
