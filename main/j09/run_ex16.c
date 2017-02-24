/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex16.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 16:53:36 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 16:55:50 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<stdio.h>

unsigned int		ft_active_bits(int value);

int		main(void)
{
	printf("active bits in %d: %d\n", 11, ft_active_bits(11));
	return (0);
}
