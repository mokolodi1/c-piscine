/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 17:48:16 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 23:47:27 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_btree.h"

void		btree_insert_data(t_btree **root
							, void *item
							, int (*cmpf)(void *, void *))
{
	t_btree		*new_one;

	if (*root == NULL)
		*root = btree_create_node(item);
	else if (cmpf(item, (*root)->item) < 0)
		btree_insert_data(&((*root)->left), item, cmpf);
	else if (cmpf(item, (*root)->item) > 0)
		btree_insert_data(&((*root)->right), item, cmpf);
	else if ((*root)->left == NULL)
		btree_insert_data(&((*root)->left), item, cmpf);
	else if ((*root)->right == NULL)
		btree_insert_data(&((*root)->right), item, cmpf);
	else
	{
		new_one = btree_create_node(item);
		new_one->right = (*root)->right;
		(*root)->right = new_one;
	}
}
