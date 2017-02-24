/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 16:35:53 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/09 19:33:23 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a function pointer to (returns int, takes (int, int))
int*(int, int)	find_function(char *str)
{
	ops operators;
	int i;

	get_operators_pointers(operators);
	if (str[0] == '\0')
		return (NULL);
	i = 0;
	while (i < NUM_OF_OPERATORS)
	{
		
		i++;
	}
}

void			get_operators_pointers(*ops)
{
	ops[0] = plus;
	ops[1] = multiply;
	ops[2] = divide;
	ops[3] = minus;
	ops[4] = modulo;
}

int				main(int argc, char **argv)
{
	int a;
	int b;
	
	if (argc != 4)
		return (WRONG_ARG_NUM);
	op = find_function(argv[2]);
	if (op == NULL)
	{
		put_result(0);
		return (INVALID_OPERATOR);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (b == 0)
	{
		if (op == find_function("/"))
		{
			ft_putstr("Stop : division by zero\n");	// check string correctness
			return (DIVISION_BY_ZERO);
		}
		if (op == find_function("%"))
		{
			ft_pustr("Stop : modulo by zero\n");	// check string correctness
			return (MODULO_BY_ZERO);
		}
	}
	put_result(op(a, b));
	return (SUCCESS);
}
