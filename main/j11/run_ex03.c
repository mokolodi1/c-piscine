/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 16:16:53 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 16:24:15 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"../../j11/ex03/ft_list.h"
#include		<stdio.h>

int				ft_list_size(t_list *begin_list);

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

	printf("size of list: %d\n", ft_list_size(holder));
	printf("(that should be 5...\n");
	return (0);
}
