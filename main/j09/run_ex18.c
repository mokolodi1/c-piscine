/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex18.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 15:41:32 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 15:52:25 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

char		*ft_join(char **tab, char *sep);

int			main(void)
{
	char *s1 = "hello";
	char *s2 = "this is cool";
	char *s3 = "asdf";
	char *s4 = NULL;
	char *strings[] = {s1, s2, s3, s4};
	char sep = '|';

	printf("%s\n", ft_join(strings, &sep));
	return (0);
}
