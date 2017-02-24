/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex05.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 16:40:36 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 17:14:17 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"../../j11/ex05/ft_list.h"
#include		<stdio.h>

t_list			*ft_list_push_params(int ac, char **av);

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
	char		*params1v[] = {"first", "second", "third", "fourth"};
	int			params1c = 4;
	char		*params2v[] = {};
	int			params2c = 0;

	printf("should print in reversed order\n");
	holder = ft_list_push_params(params1c, params1v);
	print_list(holder);

	printf("empty list trying...");
	holder = ft_list_push_params(params2c, params2v);
	printf("this should be null: %p\n", holder);
	
	return (0);
}
