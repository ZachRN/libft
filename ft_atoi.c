/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 10:46:56 by zachary       #+#    #+#                 */
/*   Updated: 2021/02/24 05:36:38 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int			sign;
	long int	value;

	sign = 1;
	value = 0;
	while (*c == 32 || (*c >= 9 && *c <= 13))
		c++;
	if (*c == 45 || *c == 43)
	{
		if (*c == 45)
			sign = -1;
		c++;
	}
	while (*c >= 48 && *c <= 57)
	{
		if (((value * 10 * sign) > 922337203685477580 && *c > 55)
			|| (value * 10 * sign) >= 9223372036854775800)
			return (-1);
		else if (((value * 10 * sign) < -922337203685477580 && *c > 56)
			|| (value * 10 * sign) <= -9223372036854775800)
			return (0);
		value = (value * 10) + (*c - 48);
		c++;
	}
	return ((int)(value * sign));
}
