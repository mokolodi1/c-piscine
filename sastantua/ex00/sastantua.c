#include "../../ft_putchar.c"
#include <stdio.h>

int		sum(int lower, int upper)
{
	int total;

	total = 0;
	while (lower < upper)
	{
		total += lower;
		lower += 1;
	}
	return (total);
}

int 	total_lines (int total_levels)			{	return sum(3, total_levels + 3);	}

int 	lines_in_level (int level)				{	return level + 3;					}

int 	lines_above_level (int level)			{	return sum(3, 3 + level);			}

int 	lines_below_level (int level, int total_levels)	
												{	return total_lines(total_levels) - lines_in_level(level) - lines_above_level(level);	}

int 	shifting_level (int level)
{
	return level / 2 + level % 2 + 1;
}

int		shifting_level_sum(int level)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i < level)
	{
		sum += shifting_level(i);
		i++;
	}

	printf("shifting_level_sum(%d): %d\n", level, sum);
	return sum;
}

int 	spaces_in_line (int total_levels, int level, int line)
{
	int a = lines_below_level(level, total_levels);		// slope below level
	int b = lines_in_level(level) - 1 - line;			// slope within level
	int c = 3 * (total_levels - level - 1);				// level shifting

	return a + b + c;
}

int 	stars_in_line (int level, int line)
{
	int a = lines_above_level(level);	// slope above level
	int b = line;						// slope within level
	int c = 3 * level;					// level shifting

	return 2 * (a + b + c) + 1;
}

void	put_spaces(int total_levels, int level, int line)
{
	int i;

	i = 0;
	while (i < spaces_in_line(total_levels, level, line))
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
}

void	put_stars(int level, int line)
{
	int i;

	i = 0;
	while (i < stars_in_line(level, line))
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
}

/*
** Have testing above this line
*/

// builds the damn thingy
void	build_thingy (int total_levels)
{
	int level;
	int line;

	level = 0;
	line = 0;

	while (level < total_levels)
	{
		while (line < lines_in_level(level))
		{
			put_spaces(total_levels, level, line);
			put_stars(level, line);
			ft_putchar('\n');
			line++;
		}
		line = 0;
		level++;
	}
}

/*
** main
*/

int		main()
{
	build_thingy(5);
	return(0);
}

/*
** testing
*/

