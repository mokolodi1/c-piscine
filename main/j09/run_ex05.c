/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex05.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 23:04:42 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 23:09:25 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int			ft_bouton(int i, int j, int k);

void		test(int a, int b, int c, int expect)
{
	int result;

	result = ft_bouton(a, b, c);
	printf("testing %d, %d, %d: %d\n", a, b, c, result);
	if (expect != result)
		printf("ERROR\n");
}

int			main(void)
{
	test(1, 2, 3, 2);
	test(1, 3, 2, 2);
	test(2, 1, 3, 2);
	test(2, 3, 1, 2);
	test(3, 1, 2, 2);
	test(3, 2, 1, 2);
	return (0);
}
