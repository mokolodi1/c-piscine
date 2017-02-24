/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 12:31:07 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/05 16:01:23 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_stuff(int argc, char **argv)
{
	int word;
	int i;
	int count;

	word = 0;
	count = 0;
	while (word < argc)
	{
		i = 0;
		while (argv[word][i])
		{
			count++;
			i++;
		}
		count++;
		word++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	int word;
	int i;
	int overall;
	char *to_return;

	to_return = malloc(sizeof(char) * (count_stuff(argc, argv) + 1));
	word = 0;
	
	while (word < argc)
	{
		i = 0;
		while (argv[word][i])
		{
			to_return[overall] = argv[word][i];
			overall++;
			i++;
		}
		to_return[overall] = '\n';
		overall++;
		word++;
	}
	to_return[overall + 1] = '\0';
	return to_return;
}
