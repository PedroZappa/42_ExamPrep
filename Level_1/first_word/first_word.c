#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	char *str = argv[1];

	while (*str && (*str != ' ') && (*str != '\n') && (*str != '\t'))
	{
		write(1, str, 1);
		++str;
	}
	write(1, "\n", 1);

	return (0);
}
