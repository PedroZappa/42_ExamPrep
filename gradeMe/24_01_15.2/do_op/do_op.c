#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char op;
	int n1;
	int n2;
	int result;

	if (argc != 4)
		printf("\n");
	else
	{
		n1 = atoi(argv[1]);
		op = argv[2][0];
		n2 = atoi(argv[3]);

		if (op == '+')
			result = n1 + n2;
		else if (op == '-')
			result = n1 - n2;
		else if (op == '*')
			result = n1 * n2;
		else if (op == '/')
			result = n1 / n2;
		else if (op == '%')
			result = n1 % n2;
		printf("%d\n", result);
	}
	return (0);
}
