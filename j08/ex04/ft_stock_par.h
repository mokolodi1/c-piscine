/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 13:44:10 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/09 18:26:47 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_STOCK_PAR_H
# define	FT_STOCK_PAR_H

# include <stdlib.h>

typedef struct	s_stock_par
{
	int	size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);
char				**ft_split_whitespaces(char *str);

#endif
