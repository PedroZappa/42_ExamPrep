#include <unistd.h> /* write() */

int main(int argc, char *argv[])
{
	char	*str = argv[1];
	char	search = argv[2][0];
	char	replace = argv[3][0];

	if ((argc == 4) && !argv[2][1] && !argv[3][1])
	{
		while (*str)
		{
			if (*str == search)
				*str = replace;
			write(1, str, 1);
			++str;
		}
	}
	write(1, "\n", 1);
	return (0);
}
