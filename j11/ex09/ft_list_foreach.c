/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 19:28:31 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/10 19:34:42 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_list.h"

void		ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	f(begin_list->data);
	if (begin_list->next != NULL)
		ft_list_foreach(begin_list->next, f);
}
