#include "libft.h"

static int	numcheck(int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
		counter++;
	if (n != 0)
	{
		while (n != 0)
		{
			n /= 10;
			counter++;
		}
	}
	else
		return (1);
	return (counter);
}

static int	currentnum(int n, int strlen)
{
	int	i;

	i = 0;
	while (i < strlen - 1)
	{
		n /= 10;
		i++;
	}
	while (n > 9 || n < -9)
		n %= 10;
	if (n < 0)
		n *= -1;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		strlen;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strlen = numcheck(n);
	str = (char *)malloc(sizeof(char) * (strlen + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		j = 1;
		i = 1;
	}
	while (i < strlen)
	{
		str[j] = currentnum(n, (strlen - i)) + '0';
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
