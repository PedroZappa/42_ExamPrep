#include <unistd.h>

int main(int argc, char **argv)
{
	char *str;

	if (argc == 2)
	{
		str = argv[1];
		while (*str)
		{
			if (*str >= 'a' && *str <= 'z')
				*str = 'z' - *str + 'a';
			else if (*str >= 'A' && *str <= 'Z')
				*str = 'Z' - *str + 'A';
			write(1, str, 1);
			++str;
		}
	}
	write(1, "\n", 1);
	return (0);
}
