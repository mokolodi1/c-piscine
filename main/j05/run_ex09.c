/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex09.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 19:16:37 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 19:24:26 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

void	test(char *str, int expect)
{
	int answer = ft_str_is_numeric(str);
	printf("input: %s;  is numeric? (expect %d): %d\n", str, expect, answer);
	if (answer != expect)
		printf("ERROR: expected does not match value.\n");
}

int		main(void)
{
	test("Helloworldthisisatest", 0);
	test("7Hello world9", 0);
	test("0990", 1);
	test("097`", 0);
	test("/2738", 0);
	test("297/", 0);
	test(":278394", 0);
	test("2978:", 0);
	test("0123456789", 1);
	test("0", 1);
	test("9", 1);
	test("", 1);
	return (0);
}
