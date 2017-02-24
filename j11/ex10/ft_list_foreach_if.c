/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 20:06:28 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 21:03:14 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_list.h"

void		ft_list_foreach_if(t_list *begin_list
						, void (*f)(void *)
						, void *data_ref
						, int (*cmp)())
{
	if (begin_list == NULL)
		return ;
	if (cmp(begin_list->data, data_ref) == 0)
		f(begin_list->data);
	if (begin_list->next != NULL)
		ft_list_foreach_if(begin_list->next, f, data_ref, cmp);
}
