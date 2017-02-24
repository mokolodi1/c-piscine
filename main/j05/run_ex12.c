/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex12.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 19:33:49 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 19:42:01 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

void	test(char *str, int expect)
{
	int answer = ft_str_is_printable(str);
	printf("input: %s;  is printable? (expect %d): %d\n", str, expect, answer);
	if (answer != expect)
		printf("ERROR: expected does not match value.\n");
}

int		main(void)
{
	test("These are all printable characters!@#$%^&*()_+}{|\":?><!~", 1);
	test("@UPPER", 1);
	test("UPPER@", 1);
	test("[UPPER", 1);
	test("UPPER[", 1);
	test("UPPER ", 1);
	test("", 1);
	printf("it's gonna get weeeeeeird\n");
	test("\r", 0);
	test("\v", 0);
	test("\a", 0);

	return (0);
}
