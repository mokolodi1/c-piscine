/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex16.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 22:50:11 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 23:20:09 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlcat(char *dest, char *src, int nb);

int		main(void)
{
	char first[25] = "Hello";
	char second[] = "This World! this is cool.";
	printf("first before: %s\nsecond: %s\n", first, second);
	ft_strlcat(first, second, 7);	// "note that a byte for the NUL should be included in size
	printf("passed: 7\n");
	printf("first after : %s\n", first);
	printf("\n");

	char first55[10] = "Hello";
	char second55[] = "This World! this is cool.";
	printf("first55 before: %s\nsecond55: %s\n", first55, second55);
	ft_strlcat(first55, second55, 11);	// "note that a byte for the NUL should be included in size
	printf("passed: 11\n");
	printf("first55 after : %s\n", first55);
	printf("\n");

	char first2[] = "Hello";
	printf("first2 before: %s\nsecond: %s\n", first2, second);
	ft_strlcat(first2, second, 26);
	printf("passed: 26\n");
	printf("first2 after : %s\n", first2);
	printf("\n");

	char firstasdf[25] = "Hello hello the";
	char secondasdf[] = "Merci World!";
	printf("firstasdf before: %s\nsecondasdf: %s\n", firstasdf, secondasdf);
	ft_strlcat(firstasdf, secondasdf, 26);	// "note that a byte for the NUL should be included in size
	printf("passed: 26\n");
	printf("firstasdf after : %s\n", firstasdf);
	printf("\n");
	return (0);
}
