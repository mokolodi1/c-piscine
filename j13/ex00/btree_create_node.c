/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 16:30:01 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 16:50:33 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*new_one;

	new_one = (t_btree*)malloc(sizeof(t_btree));
	new_one->left = NULL;
	new_one->right = NULL;
	new_one->item = item;
	return (new_one);
}
