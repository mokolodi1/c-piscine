/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex05.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 16:05:53 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 13:56:29 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		f(int a, int b)
{
	return (a - b);
}

void	print_nums(int *ints, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		printf("%d, ", ints[i]);
		i++;
	}
}

void	test(int *ints, int length, int expect)
{
	printf("about to try: ");
	print_nums(ints, length);
	printf("\n");
	int result = ft_is_sort(ints, length, &f);
	printf("expect, result: %d, %d\n", expect, result);
	if (result != expect)
		printf("\n\nERROR: result != expect\n\n\n");
	printf("\n");
}

int		main(void)
{
	int		ints1[] = {1, 2, 3, 4, 5, 6, 7, 8, 7};
	int		ints2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		ints3[] = {2, 1, 2, 3, 4, 5};
	int		ints4[] = {3};
	int		ints5[] = {5, 5};
	int		ints_blank[] = {};
	int		ints7[] = {5, 4, 3, 2, 1};

	test(ints1, 9, 0);
	test(ints2, 9, 1);
	test(ints3, 6, 0);
	test(ints4, 1, 1);
	test(ints5, 2, 1);
	test(ints_blank, 0, -1);
	test(ints7, 5, 0);
	return (0);
}
