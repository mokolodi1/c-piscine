/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 20:25:45 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 21:22:31 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"identify_shapes.h"

void		print_shape(t_shape *shape)
{
	ft_putchar('[');
	ft_putstr(shape->name);
	ft_putstr("] [");
	ft_putnbr(shape->width);
	ft_putstr("] [");
	ft_putnbr(shape->height);
	ft_putchar(']');
}

void		print_shapes(t_shape **shapes, int num)
{
	int i;

	i = 0;
	while (i < num)
	{
		print_shape(shapes[i]);
		if (i != num - 1)
			ft_putstr(" || ");
		i++;
	}
	ft_putstr("\n");
}

t_shape		*create_new_shape(char *name, int width, int height)
{
	t_shape		*new_one;

	new_one = malloc(sizeof(t_shape));
	new_one->name = name;
	new_one->width = width;
	new_one->height = height;
	return (new_one);
}
