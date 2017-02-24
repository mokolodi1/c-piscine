/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/31 15:28:00 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/09 18:41:20 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	make_negative(int *num, int neg)
{
	if (neg)
	{
		*num = -*num;
	}
}

int		ft_atoi(char *str)
{
	int	out;
	int	neg;
	int	i;

	out = 0;
	i = 0;
	neg = 0;
	while (str[i] == '-')
	{
		neg = !neg;
		i++;
	}
	if (str[i] == '0')
	{
		return (0);
	}
	while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
	{
		out *= 10;
		out += str[i] - '0';
		i++;
	}
	make_negative(&out, neg);
	return (out);
}
