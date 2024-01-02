#include <stdio.h>
#include "ft_strspn.c"

int main(void)
{
	char	*s = "Zedro 420";
	char	*accept = "Zedro";
	size_t	bytes = 0;

	bytes = ft_strspn(s, accept);
	printf("%zu\n", bytes);

	return (0);
}
