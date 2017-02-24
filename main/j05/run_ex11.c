/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex11.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 19:29:23 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 19:31:19 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

void	test(char *str, int expect)
{
	int answer = ft_str_is_uppercase(str);
	printf("input: %s;  is uppercase? (expect %d): %d\n", str, expect, answer);
	if (answer != expect)
		printf("ERROR: expected does not match value.\n");
}

int		main(void)
{
	test("UPPERCASEEVERYTHINGISASDHKLSJDFNLZXX", 1);
	test("@UPPER", 0);
	test("UPPER@", 0);
	test("[UPPER", 0);
	test("UPPER[", 0);
	test("UPPER ", 0);
	test("THISISINUPPQWEZXCLKJZQA", 1);
	return (0);
}
