/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 17:38:45 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/05 16:17:39 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char *string;
	int i;
	int src_len;

	src_len = ft_strlen(src);
	string = malloc(src_len + 1);
	if (string == NULL)
		return NULL;
	i = 0;
	while (i < src_len)
	{
		string[i] = src[i];
		i++;
	}
	string[src_len] = '\0';
	return (string);
}
