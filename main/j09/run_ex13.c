/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 14:05:45 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 14:14:45 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_compact(char **tab, int length);

int		main(void)
{
	char *s1 = "Hello";
	char *s2 = "stuff";
	char *s3 = "end";

	char *strings[3] = {s1, s2, s3};
	printf("new size: %d\n", ft_compact(strings, 3));
	return (0);
}
