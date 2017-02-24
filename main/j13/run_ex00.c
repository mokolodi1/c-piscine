/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 16:47:04 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 17:09:30 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"../../j13/ex00/ft_btree.h"
#include		<stdio.h>

t_btree			*btree_create_node(void *item);

int				main(void)
{
	t_btree		*first;
	t_btree		*second;

	first = btree_create_node("first");
	second = btree_create_node("second");
	printf("putting second in first->right\n");
	first->right = second;

	printf("I didn't make anything to test for correctness: move on...\n");
	return (0);
}
