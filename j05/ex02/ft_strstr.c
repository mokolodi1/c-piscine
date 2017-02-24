/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 12:04:43 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 20:20:21 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		outer;
	int		inner;

	if (to_find[0] == '\0')
		return (str);
	while (str[outer])
	{
		inner = 0;
		while (str[outer + inner] == to_find[inner])
		{
			if (to_find[inner + 1] == '\0')
				return (str + outer);
			inner++;
		}
		outer++;
	}
	return (NULL);
}
