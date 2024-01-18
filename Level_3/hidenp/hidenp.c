#include <unistd.h>

/*	Take two strings. Print 1 if the first string is hidden in the second, else print 0
 *
 *	While the value of str1 and str2 is not NULL
 *		If the value of str1 is equal to the value of str2
 *			Increment str1
 *		Increment str2
*	If the the wne of 'str1' is reached
*		Print 1
*	else
*		Print 0
 *	Print a new line
 *	Return 0
 *	*/
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
