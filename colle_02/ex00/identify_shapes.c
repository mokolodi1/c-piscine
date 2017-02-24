/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify_shapes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 19:52:47 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 21:25:47 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"identify_shapes.h"

/*
**	get_ident_funcs: Returns a list to all of the functions we have currently
*/

/*
**	get_ident_funcs_count: Returns the number of identify functions
*/

/*
**	identify: Recognizes and prints shapes from given input
*/

t_ident		*get_ident_funcs(void)
{
	t_ident	*idents;

	idents = malloc(sizeof(t_ident) * get_ident_funcs_count());
	idents[0] = &colle_00;
	idents[1] = &colle_01;
	idents[2] = &colle_02;
	idents[3] = &colle_03;
	idents[4] = &colle_04;
	return (idents);
}

int			get_ident_funcs_count(void)
{
	return (5);
}

int			identify(char *input)
{
	t_ident		*ident_funcs;
	int			count_funcs;
	t_shape		*curr;
	t_shape		*identified[get_ident_funcs_count()];
	int			ident_count;
	int			i;

	count_funcs = get_ident_funcs_count();
	ident_funcs = get_ident_funcs();
	ident_count = 0;
	i = 0;
	while (i < count_funcs)
	{
		curr = (ident_funcs[i])(input);
		if (curr)
		{
			identified[ident_count] = curr;
			ident_count++;
		}
		i++;
	}
	print_shapes(identified, ident_count);
	return (ident_count);
}
