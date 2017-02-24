/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 12:15:12 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 22:01:47 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"eval_expr.h"

t_list		*ft_create_elem(t_token *token)
{
	t_list *new_thingy;

	new_thingy = malloc(sizeof(t_list));
	new_thingy->token = token;
	new_thingy->next = NULL;
	return (new_thingy);
}

int			ft_list_size(t_list *begin_list)
{
	if (begin_list->next == NULL)
		return (1);
	return (1 + ft_list_size(begin_list->next));
}

void		ft_list_push(t_list **begin_list, t_token *token)
{
	t_list *new_one;

	new_one = ft_create_elem(token);
	new_one->next = *begin_list;
	*begin_list = new_one;
}

t_token		*ft_list_pop(t_list **begin_list)
{
	t_list *old_first;

	old_first = (*begin_list);
	*begin_list = (*begin_list)->next;
	return (old_first->token);
}
