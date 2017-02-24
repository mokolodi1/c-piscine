/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 19:02:05 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/09 19:43:40 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		OPERATORS_H
# define	OPERATORS_H

# define	NUM_OF_OPERATORS				5

typedef (int)(*stuff[NUM_OF_OPERATORS])(int, int) ops;

int			plus(int a, int b);
int			multiply(int a, int b);
int			divide(int a, int b);
int			minus(int a, int b);
int			modulo(int a, int b);

#endif
