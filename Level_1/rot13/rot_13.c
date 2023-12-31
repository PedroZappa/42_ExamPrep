#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 1;
	}
	while (*argv[1])
	{
		if ((*argv[1] >= 'a' && *argv[1] <= 'z'))
			*argv[1] = (*argv[1] - 'a' + 13) % 26 + 'a';
		else if ((*argv[1] >= 'A' && *argv[3] <= 'Z'))
			*argv[1] = (*argv[1] - 'A' + 13) % 26 + 'A';
		write(1, argv[1], 1);
		++argv[1];
	}
	write(1, "\n", 1);

	return 0;
}
