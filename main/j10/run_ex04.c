/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 16:00:09 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/09 16:01:58 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<stdio.h>
#include		<string.h>

int		ft_count_if(char **tab, int(*f)(char*));

int		is42(char *str)
{
	return (str[0] == '4' && str[1] == '2' && str[2] == '\0');
}

int		main(void)
{
	char *strings1[5];
	char *strings2[5];
	strings1[0] = strdup("Hello");
	strings1[1] = strdup("this is stuff");
	strings1[2] = strdup("what");
	strings1[3] = strdup("hi");
	strings1[4] = strdup("");
	strings2[0] = strdup("364");
	strings2[1] = strdup("42");
	strings2[2] = strdup("94");
	strings2[3] = strdup("42");
	strings2[4] = strdup("");

	printf("in strings1 (expect 0): %d\n", ft_count_if(strings1, &is42));
	printf("in strings2 (expect 2): %d\n", ft_count_if(strings2, &is42));
	return (0);
}
