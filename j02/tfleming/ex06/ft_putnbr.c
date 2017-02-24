/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/28 17:07:54 by tfleming          #+#    #+#             */
/*   Updated: 2014/08/28 17:07:57 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

int		determine_size(int n, int depth)
{
	if (n == 0)
	{
		return depth - 1;
	}
	else
	{
		return determine_size(n / 10, 1 + depth);
	}
}

int pow_ten(int n)	// 10 ^ n
{
	if (n == 0)
	{
		return 1;
	}

	int i;
	int to_ret;

	i = 0;
	to_ret = 1;
	while (i < n)
	{
		to_ret *= 10;
		i++;
	}
	return to_ret;
}

void	ft_putnbr(int nb)
{
	int size_pow_ten;
	int rest;

	size_pow_ten = pow_ten(determine_size(nb, 0));
	//printf("%d\n", size_pow_ten);
	ft_putchar(nb / size_pow_ten + '0');

	rest = nb % size_pow_ten;

	if (rest == 0)
	{
		if (size_pow_ten == 10) {
			ft_putchar('0');
		}
	}
	else
	{
		ft_putnbr(rest);
	}
}
