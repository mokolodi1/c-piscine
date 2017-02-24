/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 19:45:10 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/06 10:27:39 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_ultimate_range(int **range, int min, int max);

void	print_array(int *array, int low, int high)
{
	int i = 0;

	while (i < high - low)
	{
		printf("%d, ", array[i]);
		i++;
	}
}

void	test(int low, int high)
{
	printf("input: (%d, %d)\n", low, high);
	int *asdf = NULL;
	int **pointer = &asdf;
	int result = ft_ultimate_range(pointer, low, high);
	printf("result: %d\narray: ", result);
	print_array(pointer[0], low, high);
	printf("\n\n");
}

int		main(void)
{
	test(-10, -1);
	test(-1, 1);
	test(0, 0);
	test(5, 3);
	test(-1, 10);
	test(0, 20);
	return (0);
}
