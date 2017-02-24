/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 14:20:01 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/04 18:27:12 by tfleming         ###   ########.fr       */
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

void	swap(char **a, int s1, int s2)
{
	char *extra;

	extra = a[s1];
	a[s1] = a[s2];
	a[s2] = extra;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (1);
}

void	bubble_sort(char **a, int size)
{
	int changed;
	int i;

	changed = 1;
	while (changed)
	{
		i = 0;
		changed = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(a[i], a[i + 1]) > 0)
			{
				swap(a, i, i + 1);
				changed = 1;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	bubble_sort(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstrn(argv[i]);
		i++;
	}
	return (0);
}
