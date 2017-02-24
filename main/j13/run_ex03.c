/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 17:43:02 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 17:43:26 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../j13/ex03/ft_btree.h"
#include	<stdio.h>

void		btree_apply_suffix(t_btree *root, void (*applyf)(void *));

void		print_node(void *thing)
{
	printf("node: %s\n", (char*)thing);
}

t_btree		*btree_create_node(void *item)
{
	t_btree		*new_one;

	new_one = (t_btree*)malloc(sizeof(t_btree));
	new_one->left = NULL;
	new_one->right = NULL;
	new_one->item = item;
	return (new_one);
}

int			main(void)
{
	t_btree		*first;
	t_btree		*first_left;
	t_btree		*first_right;
	t_btree		*first_left_left;
	t_btree		*first_left_right;
	t_btree		*first_right_right;

	first = btree_create_node("first");
	first_left = btree_create_node("first left");
	first_right = btree_create_node("first right");
	first_left_left = btree_create_node("first left left");
	first_left_right = btree_create_node("first left right");
	first_right_right = btree_create_node("first right right");
	
	printf("about to place them...\n");
	first->right = first_right;
	first->left  = first_left;
	(first->left)->left = first_left_left;
	(first->left)->right = first_left_right;
	(first->right)->right = first_right_right;
	
	btree_apply_suffix(first, &print_node);
	return (0);
}
