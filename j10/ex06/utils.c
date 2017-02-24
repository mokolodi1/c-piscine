/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 17:57:23 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/09 19:43:39 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"utils.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str)
		ft_putstr(*(--str));
}

void		ft_putnbr(int n)
{
	// stuff goes here
}

void		put_result(int result)
{
	ft_putnbr(result);
	ft_putchar('\n');
}
