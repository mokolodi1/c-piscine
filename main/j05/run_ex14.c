/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex14.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 20:45:13 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 20:50:10 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char first[27] = "Hello";
	char second[] = " World! this is cool.";
	printf("first before: %s\nsecond: %s\n", first, second);
	ft_strncat(first, second, 7);
	printf("first after : %s\n", first);
	printf("\n");

	char first2[] = "Hello";
	printf("first2 before: %s\nsecond: %s\n", first2, second);
	ft_strncat(first2, second, 21);
	printf("first2 after : %s\n", first2);
	printf("\n");
	return (0);
}
