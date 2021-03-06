/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 20:55:15 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 22:38:34 by tfleming         ###   ########.fr       */
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
	unsigned int end_of_dest;
	unsigned int len_of_src;

	end_of_dest = 0;
	while (dest[end_of_dest])
		end_of_dest++;
	i = 0;
	len_of_src = ft_strlen(src);
	while (i < len_of_src && i + end_of_dest < size)
	{
		dest[i + end_of_dest] = src[i];
		i++;
	}
	dest[i + end_of_dest] = '\0';
	return (dest);
}
