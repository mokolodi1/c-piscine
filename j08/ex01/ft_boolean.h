/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 23:05:38 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/08 20:03:27 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef			FT_BOOLEAN_H
# define		FT_BOOLEAN_H

# include		<unistd.h>
# define			TRUE		1
# define			FALSE		0
# define			SUCCESS		0
# define			EVEN_MSG	"I have a pair number of arguments.\n"
# define			ODD_MSG		"I have an impair number of arguments.\n"

# define			EVEN(nbr)	!(nbr % 2)

typedef enum	e_bool
{
	f,
	t
}				t_bool;

#endif
