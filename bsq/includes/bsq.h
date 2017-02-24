/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 13:47:22 by tfleming          #+#    #+#             */
/*   Updated: 2014/09/18 23:17:51 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef				BSQ_H
# define			BSQ_H

# include			<stdint.h>
# include			<stddef.h>
# include			"ft.h"
# include			"ft_file.h"
# include			"ft_list.h"

/*
**	Holds the board we originally catch from input
*/

typedef struct		s_terrain
{
	char	**map;
	size_t	width;
	size_t	height;
	char	empty;
	char	obstacle;
	char	full;
}					t_terrain;

/*
**	Holds the boards we make ourselves (numbers are fun)
*/

typedef struct		s_board
{
	int		**map;
	int		width;
	int		height;
	int		rows_gened;
}					t_board;

/*
**	Holds a solution
*/

typedef struct		s_solution
{
	int		row;
	int		col;
	int		size;
}					t_solution;

size_t				nab_next_line(int const fd, char **line, char **spill);
t_terrain			*nab_terrain(int fd);
char				*str_slice(char *fish, char knife);
void				ft_strappend(char **str, size_t str_len
									, char *add, size_t add_len);
void				print_terrain(t_terrain *terrain);
void				native_americans(t_terrain *free_land);

int					build_castle(t_terrain *terrain);
t_solution			*check_the_map(t_terrain *terr, int row, int col
											, t_board *board);
void				fill_solution(t_terrain *terrain, t_solution *solution);
int					update_solution(t_solution *sol
									, int row, int col, t_board *board);
t_board				*make_board(t_terrain *terrain);
int					gen_line(t_terrain *terrain, int *line
								, int line_num, int loc);
t_solution			*free_board(t_board *board, t_solution *sol);

int					check_board(t_board *board, int row, int col, int size);
int					shift_int_star(t_terrain *terr, t_board *board, int r
												, int size);
t_solution			*make_solution(t_board *board);
t_solution			*map_error(t_board *board, t_solution *sol, int row);

#endif

