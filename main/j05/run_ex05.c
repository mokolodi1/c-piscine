/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex05.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 15:15:27 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 15:24:33 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

char	*ft_strupcase(char *str);

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

void strupcase(char *s)	// from the interwebs
{
	while (*s != '\0') {
		*s = toupper(*s);
		s++;
	}
}

void	test(char *in)
{
	//char actual[ft_strlen(in)];
	char mine[ft_strlen(in)];

	//strcpy(actual, in);
	strcpy(mine, in);
	
	//strupcase(actual);
	ft_strupcase(mine);
	printf("input : %s\n", in);
	//printf("actual: %s\n", actual);
	printf("mine  : %s\n", mine);
}

int		main(void)
{
	test("Hello World!");
	test("12345j7890");
	test("@ABC...XYZ[/]");
	test("`abc...xyz{|}");
	return (0);
}
