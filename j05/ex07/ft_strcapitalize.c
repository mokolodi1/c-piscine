/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 16:37:16 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 20:14:32 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_alpha(char c)
{
	return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
}

int		is_new_word_char(char c)
{
	return (!((c <= '9' && c >= '0') || is_alpha(c)));
}

char	*ft_strcapitalize(char *str)
{
	int i;

	if (!is_new_word_char(str[0]) && str[0] <= 'z' && str[0] >= 'a')
	{
		printf("changing\n");
		str[0] += 'A' - 'a';
	}
	i = 1;
	while (str[i])
	{
		if (is_new_word_char(str[i - 1]) && str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] += 'A' - 'a';
		}
		i++;
	}
	return (str);
}
