/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 15:39:47 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/09 15:58:32 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while (tab[i][0])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
