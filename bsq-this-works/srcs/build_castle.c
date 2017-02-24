/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_castle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 11:47:07 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/17 17:54:03 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"bsq.h"

void		build_castle(t_terrain *terrain)
{
	t_solution *solution;

	solution = pay_as_you_go(pay_as_you_go_board(terrain));
	if (solution)
		fill_solution(terrain, solution);
}
