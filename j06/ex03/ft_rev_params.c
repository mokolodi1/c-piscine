/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 13:13:42 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/04 13:15:00 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putstrn(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		ft_putstrn(argv[i]);
		i--;
	}
	return (0);
}
