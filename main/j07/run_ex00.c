/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 17:46:22 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/05 15:17:27 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

void	test(char *str)
{
	char *actual = strdup(str);
	char *mine = ft_strdup(str);

	printf("passed: %s\n", str);
	printf("actual: %s\n", actual);
	printf("mine  : %s\n", mine);
	printf("\n");
}

int		main(void)
{
	test("Hello");
	test("This is a string ending in a space ");
	printf("\nDon't forget to check for returning NULL: not enough memory!\n");
	return (0);
}
