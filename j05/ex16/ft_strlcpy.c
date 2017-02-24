/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 22:52:30 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 23:15:56 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len_of_src;

	i = 0;
	len_of_src = ft_strlen(src);
	while (i < len_of_src && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (i == size - 1)
		dest[i] = '\0';
	return (dest);
}
