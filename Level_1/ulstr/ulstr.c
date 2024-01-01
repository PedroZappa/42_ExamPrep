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
				*str -= 32;
			else if (*str >= 'A' && *str <= 'Z')
				*str += 32;
			write(1, str++, 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}
