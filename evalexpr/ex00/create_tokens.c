/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tokens.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 14:50:22 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 21:58:34 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"eval_expr.h"

t_token		*create_new_token(void)
{
	return (t_token*)malloc(sizeof(t_token));
}

t_token		*get_num(int num)
{
	t_token		*new_one;
	int			*value;

	new_one = create_new_token();
	value = malloc(sizeof(int));
	*value = num;
	new_one->type = NUM;
	new_one->data = value;
	return (new_one);
}

t_token		*get_op(char c)
{
	t_token		*new_one;

	new_one = create_new_token();
	new_one->type = OP;
	if (c == '+')
		new_one->data = &plus;
	else if (c == '-')
		new_one->data = &minus;
	else if (c == '*')
		new_one->data = &multiply;
	else if (c == '/')
		new_one->data = &divide;
	else if (c == '%')
		new_one->data = &modulo;
	return (new_one);
}

t_token		*get_right_paren(void)
{
	t_token		*new_one;

	new_one = create_new_token();
	new_one->type = R_PAREN;
	return (new_one);
}

t_token		*get_left_paren(void)
{
	t_token		*new_one;

	new_one = create_new_token();
	new_one->type = L_PAREN;
	return (new_one);
}
