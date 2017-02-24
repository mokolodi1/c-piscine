/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/31 12:18:53 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/01 15:54:09 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_len(char *str, int len)
{
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	swap(char *a, char *b)
{
	char extra;

	extra = *a;
	*a = *b;
	*b = extra;
}

char	*ft_strrev(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	len = str_len(str, len);
	while (i < (len / 2))
	{
		swap(&str[i], &str[len - i - 1]);
		i++;
	}
	return (str);
}
