/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex12.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 13:09:31 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/12 14:45:46 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../j09/ex12/ft_door.h"
#include	<stdio.h>

int			main()
{
	t_door	door;

	//printf("about to open door\n");
	open_door(&door);
	//printf("opened door\n");
	if (is_door_close(&door))
	{
		//printf("first if\n");
		open_door(&door);
	}
	if (is_door_open(&door))
	{
		//printf("second if\n");
		close_door(&door);
	}
	if (door.state == OPEN)
	{
		//printf("third if\n");
		close_door(&door);
	}
	return (EXIT_SUCCESS);
}
