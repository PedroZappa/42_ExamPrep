#include <unistd.h> /* write() */

int main(int argc, char *argv[])
{
	char	*str = argv[1];
	char	search;
	char	replace;

	if ((argc == 4) && !argv[2][1] && !argv[3][1])
	{
		search = argv[2][0];
		replace = argv[3][0];
		
		while (*str)
		{
			if (*str == search)
				*str = replace;
			write(1, str++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
