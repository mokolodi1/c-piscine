/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 13:43:59 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/08 20:20:57 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"ft_stock_par.h"

int						ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char					*ft_strdup(char *src)
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

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*params;
	t_stock_par		curr;
	int				i;

	params = malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		curr = params[i];
		curr.size_param = ft_strlen(av[i]);
		curr.str = av[i] + i;
		curr.copy = ft_strdup(av[i]);
		curr.tab = ft_split_whitespaces(av[i]);
		i++;
	}
	params[ac].str = '\0';
	return (params);
}
