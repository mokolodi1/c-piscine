/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ex04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 22:13:45 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/11 22:22:47 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<string.h>

char		*ft_rot42(char *str);

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void 		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		test(char *str, char *expect)
{
	char *result;

	result = ft_rot42(strdup(str));
	ft_putstr("testing: ");
	ft_putstr(str);
	ft_putstr("\nresult : ");
	ft_putstr(result);
	if (strcmp(result, expect) != 0)
		ft_putstr("\nERROR: something's fucked up.");
	ft_putstr("\n\n");
}

int			main(void)
{
	test("Hello World!", "Xubbe Mehbt!");
	test("dkfblzdkxbnIUFY*OUygbvkUYDSjhf,gh39qu"
		 , "tavrbptanrdYKVO*EKowrlaKOTIzxv,wx39gk");
	return (0);
}
