/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 22:07:10 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 22:16:14 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"eval_expr.h"

/*
**	pase_int_token: Parses an integer token
*/

/*
**	read_token: Reads a single token
*/

int				parse_int_token(char **str, int so_far)
{
	char	curr;

	curr = **str;
	(*str)++;
	if (curr <= '9' && curr >= '0')
		return (parse_int_token(str, so_far * 10 + (curr - '0')));
	(*str)--;
	return (so_far);
}

t_token			*read_token(char **str)
{
	char	curr;

	while (**str == ' ')
		(*str)++;
	curr = **str;
	(*str)++;
	if (curr == ')')
		return (get_right_paren());
	if (curr == '(')
		return (get_left_paren());
	if (curr == '+' || curr == '-' || curr == '*'
					|| curr == '/' || curr == '%')
		return (get_op(curr));
	(*str)--;
	return (get_num(parse_int_token(str, 0)));
}
