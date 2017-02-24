/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify_colle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmullier <nmullier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 12:05:57 by nmullier          #+#    #+#             */
/*   Updated: 2014/09/14 21:31:46 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"identify_shapes.h"

t_shape		*colle_00(char *str)
{
	int		width;
	int		gotten_width;
	int		height;

	width = expected_width(str);
	if (width == 0)
		return (NULL);
	if (check_line(str, 'o', '-', 'o') != width)
		return (NULL);
	set_stuff(&height, &gotten_width, width);
	while (gotten_width == width)
	{
		gotten_width = check_line(str + str_loc(width, height), '|', ' ', '|');
		if (gotten_width != width)
			break ;
		height++;
	}
	if (str[str_loc(width, height) + 1] != '\0' || height > 1)
		if (check_line(str + str_loc(width, height), 'o', '-', 'o') != width)
			return (NULL);
	if (str[str_loc(width, height) + 1] != '\0')
		height++;
	if (str[str_loc(width, height) + 1] != '\0')
		return (NULL);
	return (create_new_shape("colle-00", width, height));
}

t_shape		*colle_01(char *str)
{
	int		width;
	int		gotten_width;
	int		height;

	width = expected_width(str);
	if (width == 0)
		return (NULL);
	if (check_line(str, '/', '*', '\\') != width)
		return (NULL);
	set_stuff(&height, &gotten_width, width);
	while (gotten_width == width)
	{
		gotten_width = check_line(str + str_loc(width, height), '*', ' ', '*');
		if (gotten_width != width)
			break ;
		height++;
	}
	if (str[str_loc(width, height) + 1] != '\0' || height > 1)
		if (check_line(str + str_loc(width, height), '\\', '*', '/') != width)
			return (NULL);
	if (str[str_loc(width, height) + 1] != '\0')
		height++;
	if (str[str_loc(width, height) + 1] != '\0')
		return (NULL);
	return (create_new_shape("colle-01", width, height));
}

t_shape		*colle_02(char *str)
{
	int		width;
	int		gotten_width;
	int		height;

	width = expected_width(str);
	if (width == 0)
		return (NULL);
	if (check_line(str, 'A', 'B', 'A') != width)
		return (NULL);
	set_stuff(&height, &gotten_width, width);
	while (gotten_width == width)
	{
		gotten_width = check_line(str + str_loc(width, height), 'B', ' ', 'B');
		if (gotten_width != width)
			break ;
		height++;
	}
	if (str[str_loc(width, height) + 1] != '\0' || height > 1)
		if (check_line(str + str_loc(width, height), 'C', 'B', 'C') != width)
			return (NULL);
	if (str[str_loc(width, height) + 1] != '\0')
		height++;
	if (str[str_loc(width, height) + 1] != '\0')
		return (NULL);
	return (create_new_shape("colle-02", width, height));
}

t_shape		*colle_03(char *str)
{
	int		width;
	int		gotten_width;
	int		height;

	width = expected_width(str);
	if (width == 0)
		return (NULL);
	if (check_line(str, 'A', 'B', 'C') != width)
		return (NULL);
	set_stuff(&height, &gotten_width, width);
	while (gotten_width == width)
	{
		gotten_width = check_line(str + str_loc(width, height), 'B', ' ', 'B');
		if (gotten_width != width)
			break ;
		height++;
	}
	if (str[str_loc(width, height) + 1] != '\0' || height > 1)
		if (check_line(str + str_loc(width, height), 'A', 'B', 'C') != width)
			return (NULL);
	if (str[str_loc(width, height) + 1] != '\0')
		height++;
	if (str[str_loc(width, height) + 1] != '\0')
		return (NULL);
	return (create_new_shape("colle-03", width, height));
}

t_shape		*colle_04(char *str)
{
	int		width;
	int		gotten_width;
	int		height;

	width = expected_width(str);
	if (width == 0)
		return (NULL);
	if (check_line(str, 'A', 'B', 'C') != width)
		return (NULL);
	set_stuff(&height, &gotten_width, width);
	while (gotten_width == width)
	{
		gotten_width = check_line(str + str_loc(width, height), 'B', ' ', 'B');
		if (gotten_width != width)
			break ;
		height++;
	}
	if (str[str_loc(width, height) + 1] != '\0' || height > 1)
		if (check_line(str + str_loc(width, height), 'C', 'B', 'A') != width)
			return (NULL);
	if (str[str_loc(width, height) + 1] != '\0')
		height++;
	if (str[str_loc(width, height) + 1] != '\0')
		return (NULL);
	return (create_new_shape("colle-04", width, height));
}
