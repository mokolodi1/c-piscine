/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex06.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 17:14:37 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 17:30:51 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"../../j11/ex06/ft_list.h"
#include		<stdio.h>

void			ft_list_clear(t_list **begin_list);

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
	int i;
	t_list		*holder;

	holder = NULL;
	ft_list_push_back(&holder, "first pushed");
	ft_list_push_back(&holder, "second pushed");
	ft_list_push_back(&holder, "third pushed");
	ft_list_push_back(&holder, "fourth pushed");
	ft_list_push_back(&holder, "fifth pushed");

	printf("should print in order pushed.\n");
	print_list(holder);

	ft_list_clear(&holder);
	printf("just called to destroy them (muhahaha)\n");
	printf("this should be NULL: %p\n", holder);
	
	printf("\n\nThis will start an infinite loop... OPEN ACTIVITY MONITOR\n\n");
	i = 0;
	while (1)
	{
		holder = NULL;
		ft_list_push_back(&holder, "first pushed");
		ft_list_push_back(&holder, "second pushed");
		ft_list_push_back(&holder, "third pushed");
		ft_list_push_back(&holder, "fourth pushed");
		ft_list_push_back(&holder, "fifth pushed");

		//printf("should print in order pushed.\n");
		//print_list(holder);

		ft_list_clear(&holder);
		//printf("just called to destroy them (muhahaha)\n");
		//printf("this should be NULL: %p\n", holder);
		if (i % 1000000 == 0)
			printf("%d\n", i);
		i++;
	}
	return (0);
}
