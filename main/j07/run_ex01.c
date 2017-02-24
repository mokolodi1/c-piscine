/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 18:30:13 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/04 19:13:03 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

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
	printf("result: ");
	print_array(ft_range(low, high), low, high);
	printf("\n\n");
}

void	test_pointer(int low, int high)
{
	printf("input: (%d, %d)\n", low, high);
	printf("result poitner: %p", ft_range(low, high));
	printf("\n\n");
}

int		main(void)
{
	test(-10, -1);
	test(-1, 1);
	test(0, 0);
	test(-1, 10);
	test(0, 20);
	test_pointer(0, 0);
	test_pointer(10, 1);
	return (0);
}
