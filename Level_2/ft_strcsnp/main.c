#include <stdio.h>
#include <string.h>
#include "ft_strcspn.c"

int main(void)
{
	char *str = "Zedr0";
	char *reject = "+-*/o";

	printf("ft_strcspn: %ld\n", ft_strcspn(str, reject));
	printf("strcspn: %ld\n", strcspn(str, reject));

	return (0);
}
