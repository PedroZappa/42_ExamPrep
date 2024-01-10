#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int len;
	int j;

	len = 0;
	if (s)
	{
		while (s[len])
		{
			j = 0;
			while (reject[j])
			{
				if (s[len] == reject[j])
					return (len);
				++j;
			}
			++len;
		}
	}
	return (len);
}
