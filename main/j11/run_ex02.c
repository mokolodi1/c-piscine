/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 16:03:38 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 16:16:46 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"../../j11/ex02/ft_list.h"
#include		<stdio.h>

void			ft_list_push_front(t_list **begin_list, void *data);

void			print_list(t_list *first)
{
	if (first)
		printf("%s\n", (char *)first->data);
	if (first->next != NULL)
		print_list(first->next);
}

int				main(void)
{
	t_list		*holder;
	holder = NULL;
	ft_list_push_front(&holder, "first pushed");
	ft_list_push_front(&holder, "second pushed");
	ft_list_push_front(&holder, "third pushed");
	ft_list_push_front(&holder, "fourth pushed");
	ft_list_push_front(&holder, "fifth pushed");

	printf("should print in order pushed.\n");
	print_list(holder);

	return (0);
}
