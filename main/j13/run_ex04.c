/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 18:09:01 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 23:47:40 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../j13/ex04/ft_btree.h"
#include	<stdio.h>
#include	<string.h>

void		btree_insert_data(t_btree **root
							, void *item
							  , int (*cmpf)(void *, void *));

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

void		btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_infix(root->left, applyf);
	applyf(root->item);
	if (root->right)
		btree_apply_infix(root->right, applyf);
}

int			ft_strcmp(void *a, void *b)
{
	return (strcmp((char*)a, (char*)b));
}

void		insert(char *new, t_btree **first)
{
	btree_insert_data(first, new, &ft_strcmp);
}

int			main(void)
{
	t_btree		*first;
	first = NULL;
	insert("a", &first);
	insert("b", &first);
	insert("c", &first);
	insert("e", &first);
	insert("e", &first);
	insert("a", &first);
	insert("g", &first);
	insert("k", &first);
	insert("l", &first);
	insert("s", &first);
	insert("f", &first);
	insert("d", &first);
	insert("i", &first);
	insert("z", &first);
	insert("z", &first);
	insert("z", &first);
	insert("i", &first);

	printf("this will print them all out (should be sorted): \n");
	btree_apply_infix(first, &print_node);
	return (0);
}
