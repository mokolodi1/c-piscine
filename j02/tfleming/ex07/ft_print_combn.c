/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/28 17:07:54 by tfleming          #+#    #+#             */
/*   Updated: 2014/08/28 17:07:57 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

/*
** Print out the numbers, along with padding
*/

void	print_stuff(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

char	get_d_start(char b)
{
	if (b == '9')
	{
		return ('0');
	}
	else
	{
		return (b + 1);
	}
}

char	get_c_start(char a, char b)
{
	if (b == '9')
	{
		return (a + 1);
	}
	else
	{
		return (a);
	}
}

void	count_up_second(char a, char b)
{
	char c;
	char d;

	c = get_c_start(a, b);
	d = get_d_start(b);
	while (c <= '9')
	{
		while (d <= '9')
		{
			print_stuff(a, b, c, d);
			d++;
		}
		c++;
		d = '0';
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '8')
		{
			count_up_second(a, b);
			b++;
		}
		a++;
		b = '0';
	}
}
