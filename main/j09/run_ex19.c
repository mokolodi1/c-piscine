/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex19.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 14:56:07 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 15:19:26 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_unmatch(int *tab, int length);

int		main(void)
{
	int first[] = {1, 2, 3, 4, 4, 3, 2, 1, 5};

	printf("thing: %d\n", ft_unmatch(first, 9));
	return (0);
}
