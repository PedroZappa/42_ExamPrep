#include <unistd.h>

int main(int argc, char *argv[])
{
	char *str1;
	char *str2;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];

		while (*str1 && *str2)
		{
			if (*str1 == *str2)
				++str1;
			++str2;
		}
		if (*str1 == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
