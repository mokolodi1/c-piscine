/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 13:21:01 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/09 11:54:00 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../j08/ex02/ft_abs.h"
#include <stdio.h>

int		main(void)
{
	printf("All of the following numbers should be positive.\n");
	printf(" 1 : %d\n", ABS(1));
	printf("-1 : %d\n", ABS(-1));
	printf(" 0 : %d\n", ABS(0));
	printf("-9 : %d\n", ABS(-9));
	printf("-(-1): %d\n", ABS(-(-1)));
	printf("--(-1): %d\n", ABS(-(-(-1))));
	printf("ABS(1-3*4) + 2: %d\n", ABS(1-3*4) + 2);
	return (0);
}
