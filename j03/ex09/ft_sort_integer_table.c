/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/31 16:47:56 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/01 16:39:28 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** For those of you actually looking at this, this uses insertion sort
*/

void	print_array(int *a, int size);

void	swap(int *a, int i, int j)
{
	int extra;

	extra = a[i];
	a[i] = a[j];
	a[j] = extra;
}

void	insertion_sort(int *a, int low, int high)
{
	int i;
	int j;

	i = low;
	while (i <= high)
	{
		j = i;
		while (j > low && a[j] < a[j - 1])
		{
			swap(a, j, j - 1);
			j--;
		}
		i++;
	}
}

void	ft_sort_integer_table(int *a, int size)
{
	insertion_sort(a, 0, size - 1);
}
