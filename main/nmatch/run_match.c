/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_match.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 19:40:24 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/07 19:56:05 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int			match(char *string, char *pattern);

void		test(char *string, char *pattern, int expect)
{
	int result;

	result = match(string, pattern);
	printf("string : %s\n", string);
	printf("pattern: %s\n", pattern);
	printf("matches: %d\n", result);
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
	return (0);
}
