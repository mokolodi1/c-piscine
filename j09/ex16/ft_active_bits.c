/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 16:50:05 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 16:56:25 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Wegner, Peter (1960), "A technique for counting ones in a binary computer",
** Communications of the ACM 3 (5): 322, doi:10.1145/367236.367286
*/

unsigned int		ft_active_bits(int value)
{
	int		count;

	count = 0;
	while (value)
	{
		value &= value - 1;
		count++;
	}
	return (count);
}
