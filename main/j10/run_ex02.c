/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 14:57:57 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/09 15:38:00 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int*	ft_map(int *tab, int length, int(*f)(int));

void	ft_putnbr(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int		ft_putnbr_double(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	return (n * 2);
}

int		main(void)
{
	int hello[] = {4, 5, 6, 7, 8, 9};
	int *result;
	
	result = ft_map(hello, 6, &ft_putnbr_double);
	int i = 0;
	while (i < 6)
	{
		char c = '\n';
		write(1, &c, 1);
		ft_putnbr(result[i]);
		i++;
	}
	return (0);
}
