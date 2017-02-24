/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 19:08:24 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 19:17:41 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void		ft_takes_place(int hour);

int			main(void)
{
	int i;

	i = 0;
	while (i < 24)
	{
		//printf("\ni = %d\n", i);
		ft_takes_place(i);
		i++;
	}
	return (0);
}
