#include <unistd.h>

int main(int argc, char *argv[])
{
	char	*str = NULL;
	char	*ret = NULL;
	int		record;

	if (argc == 2)
	{
		str = argv[1];

		record = 0;
		while (*str)
		{
			if (*str && *str != ' ' && *str != '\t' && !record)
			{
				record = 1;
				ret = str;
			}
			else if (*str == ' ' || *str == '\t')
				record = 0;
			++str;
		}
		
	}
	while (ret && *ret && (*ret != ' ') && (*ret != '\t'))
	{
		write(1, &ret, 1);
		++ret;
	}
	write(1, "\n", 1);
	return (0);
}

