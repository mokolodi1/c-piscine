/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 16:37:09 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/03 22:30:44 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

char	*ft_strncpy(char *dest, char *str, unsigned int n);

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void ft_putchar(char a)
{
	write(1, &a, 1);
	return;
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	test(char *test_string, int num, int size_dst)
{
	printf("passed: %s, %d, %d\n", test_string, num, size_dst);
	char *stuff = "to get rid of the stuff";
	char mine[size_dst];
	char actual[size_dst];

	memset(actual, '\0', sizeof(actual));
	memset(mine,   '\0', sizeof(mine));

	char *actual_ret = strncpy(actual, test_string, num);
	char *mine_ret = ft_strncpy(mine, test_string, num);

	printf("actual: %s\n", actual);
	printf("mine  : %s\n", mine);
	printf("actual_ret: %s\n", actual_ret);
	printf("mine_ret  : %s\n", mine_ret);
	printf("\n");
	stuff++;
}

int		main(void)
{
	printf("\n\nABOUT TO START\n\n");
	test("Hello", 5, 5);
	test("This is 42", 20, 20);
	printf("about to test the return values...\n\n");
	test("1Hello", 2, 4);
	test("2Hello", 4, 2);
	test("Hello", 3, 3);
	test("This is 42", 6, 6);

	printf("\n\nnot using the test funtion..\n\n");
	char original[] = "Hello I love the world!";
	char original_actual[] = "Hello I love the world!";
	char to_copy[] = "Merci";
	printf("before: %s\n", original);
	strncpy(original_actual, to_copy, 5);
	ft_strncpy(original, to_copy, 5);
	printf("actual: %s\n", original_actual);
	printf("mine  : %s\n", original);
	strncpy(original_actual, to_copy, 10);
	ft_strncpy(original, to_copy, 10);
	printf("actual: %s\n", original_actual);
	printf("mine  : %s\n", original);
	return (0);
}
