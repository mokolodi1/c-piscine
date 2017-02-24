/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 23:27:18 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/08 13:34:55 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../j08/ex03/ft_point.h"
#include	<stdio.h>

void		set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

void		print_stuff(t_point *point)
{
	printf("x: %d\n", point->x);
	printf("y: %d\n", point->y);
}

int			main(void)
{
	t_point		point;

	set_point(&point);
	print_stuff(&point);
	return (0);
}
