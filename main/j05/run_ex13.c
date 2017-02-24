/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 20:30:23 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 20:40:55 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char first[27] = "Hello";
	char second[] = " World! this is cool.";
	printf("first before: %s\nsecond: %s\n", first, second);
	ft_strcat(first, second);
	printf("first after : %s\n", first);
	printf("Yes, it's that short...\n");
	return (0);
}
