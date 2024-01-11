typedef struct  s_point
{
	int           x;
	int           y;
}               t_point;

void	fill(char **tab, t_point size, t_point curr, char to_fill);
int		out_of_bounds(t_point curr, t_point size);


void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

void	fill(char **tab, t_point size, t_point curr, char to_fill)
{
	if (out_of_bounds(curr, size) || (tab[curr.y][curr.x] != to_fill))
		return ;

	tab[curr.y][curr.x] = 'F';
	fill(tab, size, (t_point){curr.x - 1, curr.y}, to_fill);
	fill(tab, size, (t_point){curr.x + 1, curr.y}, to_fill);
	fill(tab, size, (t_point){curr.x, curr.y - 1}, to_fill);
	fill(tab, size, (t_point){curr.x, curr.y + 1}, to_fill);
}

int		out_of_bounds(t_point curr, t_point size)
{
	return ((curr.y < 0) || (curr.x < 0) || (curr.y >= size.y) || (curr.x >= size.x));
}
