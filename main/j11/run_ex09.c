/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex09.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 19:29:13 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 20:04:13 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"../../j11/ex09/ft_list.h"
#include		<stdio.h>

void			ft_list_foreach(t_list *begin_list, void (*f)(void *));

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

void		print_it(void *thing)
{
	char *char_thing = (char*)thing;
	printf("thing: %s\n", char_thing);
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

	printf("should print the things in order\n");
	ft_list_foreach(holder, &print_it);
	return (0);
}
