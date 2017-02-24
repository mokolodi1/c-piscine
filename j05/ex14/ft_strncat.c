/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 20:44:20 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 20:50:52 by tfleming         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int end_of_dest;
	int len_of_src;

	end_of_dest = 0;
	while (dest[end_of_dest])
		end_of_dest++;
	i = 0;
	len_of_src = ft_strlen(src);
	while (i < len_of_src && i < nb)
	{
		dest[i + end_of_dest] = src[i];
		i++;
	}
	dest[i + end_of_dest] = '\0';
	return (dest);
}
