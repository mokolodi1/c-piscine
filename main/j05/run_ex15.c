/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex15.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 22:02:49 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 22:49:50 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlcat(char *dest, char *src, int nb);

int		main(void)
{
	char first[25] = "Hello";
	char second[] = " World! this is cool.";
	printf("first before: %s\nsecond: %s\n", first, second);
	ft_strlcat(first, second, 7);	// "note that a byte for the NUL should be included in size
	printf("first after : %s\n", first);
	printf("\n");

	char first2[] = "Hello";
	printf("first2 before: %s\nsecond: %s\n", first2, second);
	ft_strlcat(first2, second, 26);
	printf("first2 after : %s\n", first2);
	printf("\n");
	return (0);
}
