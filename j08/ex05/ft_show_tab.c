/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 18:44:35 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/08 20:33:05 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		ft_putnbr(int nbr)
{
	if (nbr > 0)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

void		ft_show_tab(struct s_stock_par *pars)
{
	struct s_stock_par	curr;
	char				**words;

	while (pars->str[0])
	{
		ft_putstr(pars->str);
		ft_putchar('\n');
		ft_putnbr(pars->size_param);
		ft_putchar('\n');
		words = pars->tab;
		while (**words)
		{
			ft_putstr(*words);
			(*words)++;
		}
		pars++;
	}
}
