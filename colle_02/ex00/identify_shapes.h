/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify_shapes.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 19:52:13 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/14 20:47:01 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef						IDENTIFY_SHAPES_H
# define					IDENTIFY_SHAPES_H

# include					<unistd.h>
# include					<stdlib.h>

# define					TRUE					1
# define					FALSE					0

typedef struct				s_shape
{
	char	*name;
	int		width;
	int		height;
}							t_shape;

typedef t_shape				*(*t_ident)(char*);

char						*ft_strcpy(char *dest, char *src);
char						*reallocate(char *buf, int ret, char *parse);
char						*read_input(void);
int							main(void);

t_ident						*get_ident_funcs(void);
int							get_ident_funcs_count(void);
int							identify(char *input);

void						print_shape(t_shape *shape);
void						print_shapes(t_shape **shapes, int num);
t_shape						*create_new_shape(char *name
												, int width
												, int height);

void						ft_putchar(char c);
void						ft_putstr(char *str);
void						ft_putnbr(int nbr);
int							ft_strlen(char *str);
char						*ft_strdup(char *src);

t_shape						*colle_00(char *str);
t_shape						*colle_01(char *str);
t_shape						*colle_02(char *str);
t_shape						*colle_03(char *str);
t_shape						*colle_04(char *str);

int							expected_width(char *str);
int							check_line(char *str, char first
										, char middle, char last);
int							str_loc(int width, int height);
void						set_stuff(int *height, int *gotten_width
										, int width);

#endif
