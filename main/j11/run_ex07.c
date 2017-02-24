/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex07.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 17:34:13 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 21:01:39 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"../../j11/ex07/ft_list.h"	// change
#include		<stdio.h>

t_list			*ft_list_at(t_list *begin_list, unsigned int nbr);

void			print_list(t_list *first)
{
	if (first)
		printf("%s\n", (char *)first->data);
	if (first->next != NULL)
		print_list(first->next);
}

t_list		*ft_create_elem(void *data)
{
	t_list *new_thingy;

	new_thingy = malloc(sizeof(t_list));
	new_thingy->data = data;
	new_thingy->next = NULL;
	return (new_thingy);
}

t_list		*find_end(t_list *list)
{
	if (list->next == NULL)
		return (list);
	return (find_end(list->next));
}

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_one;

	new_one = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = new_one;
	else
		find_end(*begin_list)->next = new_one;
}


int				main(void)
{
	t_list		*holder;
	holder = NULL;
	ft_list_push_back(&holder, "first pushed");
	ft_list_push_back(&holder, "second pushed");
	ft_list_push_back(&holder, "third pushed");
	ft_list_push_back(&holder, "fourth pushed");
	ft_list_push_back(&holder, "fifth pushed");

	printf("should print in order pushed.\n");
	print_list(holder);

	printf("this is the first element: %s\n", (char*)ft_list_at(holder, 1)->data);
	printf("this is the third element: %s\n", (char*)ft_list_at(holder, 3)->data);
	printf("this is the fifth element: %s\n", (char*)ft_list_at(holder, 5)->data);

	// stuff that should return null
	void *sixth = ft_list_at(holder, 6);

	printf("This should be zero (sixth one): %p\n", sixth);
	void *ninth = (char*)ft_list_at(holder, 9);
	printf("This should be zero (ninth one): %p\n", ninth);
	return (0);
}

