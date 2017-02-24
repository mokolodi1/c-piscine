/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex08.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 18:48:50 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 19:16:15 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

void	test(char *str, int expect)
{
	int answer = ft_str_is_alpha(str);
	printf("input: %s;  is alpha? (expect %d): %d\n", str, expect, answer);
	if (answer != expect)
		printf("ERROR: expected does not match value.\n");
}

int		main(void)
{
	test("Helloworldthisisatest", 1);
	test("Hello world", 0);
	test("AzZazAaZ", 1);
	test("As`", 0);
	test("Ndlsfdlkj{", 0);
	test("", 1);
	return (0);
}
