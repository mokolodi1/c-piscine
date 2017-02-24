/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/31 18:34:46 by tfleming          #+#    #+#             */
/*   Updated: 2014/08/31 18:40:27 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

/*
** Draws a line in the middle (one line at a time)
*/

void	draw_line(int len, char first, char middle, char last)
{
	int i;

	ft_putchar(first);
	i = 1;
	while (i < len - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (len != 1)
	{
		ft_putchar(last);
	}
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	int i;

	draw_line(x, 'A', 'B', 'C');
	i = 1;
	while (i < y - 1)
	{
		draw_line(x, 'B', ' ', 'B');
		i++;
	}
	if (y != 1)
	{
		draw_line(x, 'A', 'B', 'C');
	}
}
