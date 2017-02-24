/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 11:46:04 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 22:25:09 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"eval_expr.h"

/*
**	cmp_operators: Returns whether it should pop the operator or not
*/

/*
**	eval_output: Evaluate an output from eval_expr and turn it into an int
*/

/*
**	deal_with_ops: Deals with ops, because of the norm :'(
*/

/*
**	eval_expr: Shunting yard algorithm
*/

int				cmp_operators(t_token *o1, t_token *o2)
{
	int first_is_small;
	int second_is_small;

	first_is_small = (o1->data == &plus || o1->data == &minus);
	second_is_small = (o2->data == &plus || o2->data == &minus);
	return (second_is_small - first_is_small);
}

int				eval_output(t_list **output)
{
	t_token		*curr;
	t_op		op_func;

	curr = ft_list_pop(output);
	if (curr->type == NUM)
		return (*((int*)curr->data));
	op_func = (t_op)curr->data;
	return (op_func(eval_output(output), eval_output(output)));
}

void			deal_with_ops(t_list **output, t_list **stack, t_token **curr)
{
	while ((*stack) && (*stack)->token->type == OP
					&& cmp_operators(*curr, (*stack)->token) <= 0)
		ft_list_push(output, ft_list_pop(stack));
	ft_list_push(stack, *curr);
}

int				eval_expr(char *str)
{
	t_list		*output;
	t_list		*stack;
	t_token		*curr;

	output = NULL;
	stack = NULL;
	while (*str)
	{
		curr = read_token(&str);
		if (curr->type == NUM)
			ft_list_push(&output, curr);
		else if (curr->type == OP)
			deal_with_ops(&output, &stack, &curr);
		else if (curr->type == L_PAREN)
			ft_list_push(&stack, curr);
		else
		{
			while (stack->token->type != L_PAREN)
				ft_list_push(&output, ft_list_pop(&stack));
			ft_list_pop(&stack);
		}
	}
	while (stack)
		ft_list_push(&output, ft_list_pop(&stack));
	return (eval_output(&output));
}
