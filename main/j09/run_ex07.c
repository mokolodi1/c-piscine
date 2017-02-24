/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex07.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 10:45:41 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 10:55:13 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base);

void			test(unsigned int start, unsigned int expect)
{
	unsigned int result;

	result = ft_collatz_conjecture(start);
	printf("number, result: %d, %d\n", start, result);
	if (result != expect)
		printf("ERROR!\n");
}

int				main(void)
{
	test(1, 0);
	test(2, 1);
	test(3, 7);
	test(5, 5);
	test(57, 32);
	return (0);
}
