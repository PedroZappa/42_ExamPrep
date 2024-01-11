#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

typedef struct 	s_point {
    int 		x;			// x = Width  || x-axis
    int 		y;			// y = Height || y-axis
} 				t_point;

void	flood_fill(char **tab, t_point size, t_point begin);

#endif

