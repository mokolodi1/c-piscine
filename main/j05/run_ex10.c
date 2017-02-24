/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 19:25:36 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 19:27:52 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

void	test(char *str, int expect)
{
	int answer = ft_str_is_lowercase(str);
	printf("input: %s;  is lowercase? (expect %d): %d\n", str, expect, answer);
	if (answer != expect)
		printf("ERROR: expected does not match value.\n");
}

int		main(void)
{
	test("lowercaseeverythingislowercase", 1);
	test("lower`", 0);
	test("`lower", 0);
	test("{lower", 0);
	test("lower{", 0);
	test("hello world", 0);
	test("askdfhaibdsfasjhkbfbiuhdgbhjdfjkndsfbjhdkdjasdfhjksfhjbafsdjka", 1);
	return (0);
}
