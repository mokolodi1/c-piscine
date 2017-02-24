/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex06.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 15:26:15 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 15:27:27 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

char	*ft_strlowcase(char *str);

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void strlowcase(char *s)	// from the interwebs, changed by me
{
	while (*s != '\0') {
		*s = tolower(*s);
		s++;
	}
}

void	test(char *in)
{
	char mine[ft_strlen(in)];

	strcpy(mine, in);
	
	ft_strlowcase(mine);
	printf("input : %s\n", in);
	printf("mine  : %s\n", mine);
}

int		main(void)
{
	test("Hello World!");
	test("12345J7890");
	test("@ABC...XYZ[/]");
	test("`abc...xyz{|}");
	return (0);
}
