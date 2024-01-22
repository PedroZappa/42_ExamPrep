#include <unistd.h>	/* write() */
#include <stdio.h>	/* printf() */
#include <stdlib.h>	/* atoi() */

int main(int argc, char **argv)
{
	int		n1;
	int		n2;
	char	op;
	int		result;

	result = 0;
	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		op = argv[2][0];
		n2 = atoi(argv[3]);

		if (op == '+')
			result = (n1 + n2);
		else if (op == '-')
			result = (n1 - n2);
		else if (op == '*')
			result = (n1 * n2);
		else if (op == '/')
			result = (n1 / n2);
		else if (op == '%')
			result = (n1 % n2);
		
		return (printf("%d\n", result));
	}
	else
		printf("\n");
	return (0);
}
