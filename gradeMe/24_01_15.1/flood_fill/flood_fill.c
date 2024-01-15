#include "flood_fill.h"

int out_of_bounds(t_point size, t_point point);
void fill(char **tab, t_point size, t_point curr, char to_fill);

void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

void fill(char **tab, t_point size, t_point curr, char to_fill)
{
	if (out_of_bounds(size, curr) || (tab[curr.y][curr.x] != to_fill))
		return ;

	tab[curr.y][curr.x] = 'F';
	fill(tab, size, (t_point){curr.x + 1, curr.y}, to_fill);
	fill(tab, size, (t_point){curr.x - 1, curr.y}, to_fill);
	fill(tab, size, (t_point){curr.x, curr.y + 1}, to_fill);
	fill(tab, size, (t_point){curr.x, curr.y - 1}, to_fill);
}

int out_of_bounds(t_point size, t_point point)
{
	return (point.x < 0 || point.y < 0 || point.x >= size.x || point.y >= size.y);
}
