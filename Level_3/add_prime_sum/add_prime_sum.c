#include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		is_prime(int nb);

int main(int argc, char *argv[])
{
	int max;
	int curr;
	int sum;

	if (argc != 2)
	{
		write(1, "0", 1);
		return (0);	
	}
	max = ft_atoi(argv[1]);
	curr = 2;
	sum = 0;
	while (curr <= max)
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

int	is_prime(int nb)
{
	int	i = 2;

	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

