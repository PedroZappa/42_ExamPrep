#ifndef FT_LIST
# define FT_LIST

# include <stdio.h>
# include <stdlib.h>

typedef struct		s_list
{
    struct s_list	*next;
    void			*data;
}					t_list;

int	ft_list_size(t_list *begin_list);

#endif // !FT_LIST 
