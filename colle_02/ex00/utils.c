/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 19:21:39 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 21:23:44 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"identify_shapes.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void		ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int			ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char		*ft_strdup(char *src)
{
	char	*string;
	int		i;
	int		src_len;

	src_len = ft_strlen(src);
	string = malloc(src_len + 1);
	if (string == NULL)
		return (NULL);
	i = 0;
	while (i < src_len)
	{
		string[i] = src[i];
		i++;
	}
	string[src_len] = '\0';
	return (string);
}
