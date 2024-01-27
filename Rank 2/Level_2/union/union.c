#include <unistd.h>

int main(int argc, char **argv)
{
	char ascii[128] = { 0 };
	char *str1;
	char *str2;
	int i;
	
	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		
		i = 0;
		while (str1[i])
		{
			if (ascii[(int)str1[i]] == 0)
			{
				ascii[(int)str1[i]] = 1;
				write(1, &str1[i], 1);
			}
			++i;
		}
		i = 0;
		while (str2[i])
		{
			if (ascii[(int)str2[i]] == 0)
			{
				ascii[(int)str2[i]] = 1;
				write(1, &str2[i], 1);
			}
			++i;
		}
	}
	write(1, "\n", 1);
	return (0);
}
