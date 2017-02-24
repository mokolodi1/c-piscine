/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 19:20:37 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 21:23:33 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"identify_shapes.h"

#define		BUF_SIZE	4096

char		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*reallocate(char *buf, int ret, char *parse)
{
	int		parse_len;
	char	*new_parse;

	parse_len = 0;
	if (parse)
		parse_len = ft_strlen(parse);
	new_parse = malloc(sizeof(char) * (parse_len + ret + 1));
	if (parse)
	{
		ft_strcpy(new_parse, parse);
		free(parse);
	}
	ft_strcpy(&new_parse[parse_len], buf);
	return (new_parse);
}

char		*read_input(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*parse;

	parse = NULL;
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		parse = reallocate(buf, ret, parse);
	}
	if (ret == -1)
		return (NULL);
	return (parse);
}

int			main(void)
{
	char *input;

	input = read_input();
	if (input != NULL && input[0] != '\0' && !identify(input))
		ft_putstr("aucune\n");
	return (0);
}
