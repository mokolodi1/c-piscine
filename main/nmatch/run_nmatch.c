/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_nmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 22:42:39 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/07 22:48:41 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int			nmatch(char *string, char *pattern);

void		test(char *string, char *pattern, int expect)
{
	int result;

	result = nmatch(string, pattern);
	printf("string : %s\n", string);
	printf("pattern: %s\n", pattern);
	printf("number of matches: %d\n", result);
	if (result != expect)
		printf("ERROR: does not match\n");
	printf("\n");
}

int			main(void)
{
	test("a",	"a",	1);
	test("abc",	"abc",	1);
	test("abc",	"a*",	1);
	test("a",	"d",	0);
	test("abc",	"*f",	0);
	test("a",	"a*",	1);
	test("abcd","*d",	1);
	test("*",	"*",	1);
	test("",	"",		1);
	test("",	"*",	1);
	test("abc",	"a**",	3);
	return (0);
}
