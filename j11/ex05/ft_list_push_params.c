/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 16:41:28 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 20:56:02 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_one;

	new_one = ft_create_elem(data);
	new_one->next = *begin_list;
	*begin_list = new_one;
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*first_elem;

	if (ac == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&first_elem, av[i]);
		i++;
	}
	return (first_elem);
}
