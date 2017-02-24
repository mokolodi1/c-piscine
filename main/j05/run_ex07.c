/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex07.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 16:47:08 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 18:43:52 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

char	*ft_strcapitalize(char *str);

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

void	test(char *in)
{
	char mine[ft_strlen(in)];

	strcpy(mine, in);
	
	ft_strcapitalize(mine);
	printf("input : %s\n", in);
	printf("mine  : %s\n", mine);
	printf("\n");
}

int		main(void)
{
	test("hello world!");
	test("12345j7890");
	test("@ABC...XYZ[/]");
	test("`abc...xyz{|}");
	test(" h97*j(Jingle $dogs9cats_supdude ");
	return (0);
}
