/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 14:18:14 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 22:02:41 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"eval_expr.h"

int			plus(int a, int b)
{
	return (a + b);
}

int			minus(int a, int b)
{
	return (a - b);
}

int			multiply(int a, int b)
{
	return (a * b);
}

int			divide(int a, int b)
{
	return (a / b);
}

int			modulo(int a, int b)
{
	return (a % b);
}
