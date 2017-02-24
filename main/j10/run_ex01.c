/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 13:53:08 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/09 15:37:32 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10+ '0';
	write(1, &c, 1);
}

int		main(void)
{
	int hello[] = {4, 5, 6, 7, 8, 9};
	ft_foreach(hello, 6, &ft_putnbr);
	return (0);
}
