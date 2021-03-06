/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex12.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 21:54:50 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 22:40:05 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"../../j11/ex12/ft_list.h"
#include		<stdio.h>

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (1);
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
	// stuff
	printf("\nshould print everything but firsth\n");
	ft_list_remove_if(&holder, "first pushed", &ft_strcmp);
	print_list(holder);

	printf("\nshould print everything but first and fifth\n");
	ft_list_remove_if(&holder, "fifth pushed", &ft_strcmp);
	print_list(holder);
	return (0);
}

