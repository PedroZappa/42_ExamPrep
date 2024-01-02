
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	char	*str;
	int		i;

	if (argc == 2)
	{
		str = argv[1];
		i = 0;
		while (*str)
		{
			if ((*str >= 'A') && (*str <= 'Z') && (i != 0))
			{
				write(1, "_", 1);
				*str = *str + 32;
			}
			write(1, str, 1);
			++str;
			++i;
		}
	}
	return (write(1, "\n", 1));
}
