/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 13:58:55 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 14:24:59 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"../../j11/ex00/ft_list.h"
#include		<stdio.h>

void			print_list(t_list *first)
{
	printf("%s\n", (char *)first->data);
	if (first->next != NULL)
		print_list(first->next);
}

int				main(void)
{
	t_list		*first;
	t_list		*second;
	first = ft_create_elem("first");
	second = ft_create_elem("second");
	first->next = second;
	printf("should print first \\n second\n");
	print_list(first);
	return (0);
}
