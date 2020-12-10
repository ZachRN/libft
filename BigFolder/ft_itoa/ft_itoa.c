/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/26 07:59:32 by znajda        #+#    #+#                 */
/*   Updated: 2020/12/10 16:40:19 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numcheck(int n)
{
	int counter;

	counter = 0;
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
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
	}
	while (i < strlen - 1)
	{
		n /= 10;
		i++;
	}
	while (n > 9)
		n %= 10;
	return (n);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		strlen;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strlen = numcheck(n);
	str = (char *)malloc(sizeof(char) * (strlen + 2));
	if (n < 0)
	{
		str[0] = '-';
		j = 1;
	}
	while (i < strlen)
	{
		str[j] = currentnum(n, (strlen - i)) + 48;
		j++;
		i++;
	}
	return (&str[0]);
}
