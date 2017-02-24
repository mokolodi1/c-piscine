/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/28 15:00:44 by tfleming          #+#    #+#             */
/*   Updated: 2014/08/28 16:40:34 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_reverse_alphabet(void)
{
	char i;

	i = 'z';
	while ('a' <= i)
	{
		ft_putchar(i);
		i--;
	}
}
