/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colles_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 18:40:36 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 21:26:24 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"identify_shapes.h"

/*
**	expected_width: Finds the expected size of the colle
*/

/*
**	check_line: Returns the length of the line
*/

int			expected_width(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

int			check_line(char *str, char first, char middle, char last)
{
	int i;

	if (str[0] != first)
		return (0);
	if (str[1] == '\n')
		return (1);
	i = 1;
	while (str[i] == middle)
		i++;
	if (str[i++] != last)
		return (0);
	if (str[i] != '\n')
		return (0);
	return (i);
}

void		set_stuff(int *height, int *gotten_width, int width)
{
	*height = 1;
	*gotten_width = width;
}

int			str_loc(int width, int height)
{
	return ((width + 1) * height);
}
