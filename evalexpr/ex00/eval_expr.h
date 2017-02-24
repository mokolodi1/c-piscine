/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 11:46:19 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 22:23:46 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef						EVAL_EXPR_H
# define					EVAL_EXPR_H

# include					<stdlib.h>
# include					<unistd.h>

enum						e_token
{
	OP,
	NUM,
	L_PAREN,
	R_PAREN
};

enum						e_op
{
	PLUS,
	MINUS,
	MULT,
	DIV,
	MOD
};

typedef	int					(*t_op)(int, int);

typedef struct				s_token
{
	enum e_token	type;
	void			*data;
}							t_token;

typedef struct				s_list
{
	struct s_list	*next;
	t_token			*token;
}							t_list;

int							main(int ac, char **av);

int							eval_expr(char *str);
int							eval_output(t_list **output);
int							cmp_operators(t_token *o1, t_token *o2);
void						deal_with_ops(t_list **output, t_list **stack
														, t_token **curr);
t_token						*read_token(char **str);
int							parse_int_token(char **str, int so_far);

t_token						*create_new_token();
t_token						*get_num(int num);
t_token						*get_op(char c);
t_token						*get_right_paren();
t_token						*get_left_paren();

int							plus(int a, int b);
int							minus(int a, int b);
int							multiply(int a, int b);
int							divide(int a, int b);
int							modulo(int a, int b);

t_list						*ft_create_elem(t_token *token);
int							ft_list_size(t_list *begin_list);
void						ft_list_push(t_list **begin_list, t_token *token);
t_token						*ft_list_pop(t_list **begin_list);

void						ft_putchar(char c);
void						ft_putnbr(int nbr);

#endif
