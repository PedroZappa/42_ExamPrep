#include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		is_prime(int nb);

/*	Print the sum of all prime numbers less or equal to 'n'.
 *
 *	If the number of arguments is not 2, 
 *		Print '0'
 *		Return.
 *	Get the input 'n' convert it to int and store it in 'num'
 *	Initialize 'curr' to 2
 *	Initialize 'sum' to 0
 *	While 'curr' is less or equal to 'num'
 *		If 'curr' is a prime number
 *			Add 'curr' to 'sum'
 *		Increment 'curr'
 *	Print 'sum'
 *	Return
 *	*/
int main(int argc, char *argv[])
{
	int num;
	int curr;
	int sum;

	if (argc != 2)
	{
		write(1, "0", 1);
		return (0);	
	}
	num = ft_atoi(argv[1]);
	curr = 2;
	sum = 0;
	while (curr <= num)
	{
		if (is_prime(curr))
			sum += curr;
		++curr;
	}
	ft_putnbr(sum);
	return (0);
}

int	ft_atoi(char *str)
{
	int nb;
	int neg;
	int i;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		++str;
	neg = 1;
	if (*str == '-')
		neg = -1;
	while (*str == '-' || *str == '+')
		++str;
	nb = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		++i;
	}
	return (nb * neg);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

/*	Initialize 'i' to 2	
 *	If 'nb' is less or equal to 1
 *		Return 0
 *	While 'i' squared is less or equal to 'nb'
 *		if 'nb' is divisible by 'i'
 *			Return 0
 *		Increment 'i'
 *	Return 1
 *	*/
int	is_prime(int nb)
{
	int	i = 2;

	if (nb <= 1)
		return (0);
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

