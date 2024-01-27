#include <unistd.h>

int main(int argc, char *argv[])
{
	char *str1;
	char *str2;
	int c1 = 0;
	int c2 = 0;

	if (argc == 3) 
	{
		str1 = argv[1];
		str2 = argv[2];

		c1 = 0;
		while (str2[c2])
			if (str2[c2++] == str1[c1])
				++c1;
		if (str1[c1] == '\0')
			write(1, str1, c1);
	}
	write(1, "\n", 1);
	return 0;
}
