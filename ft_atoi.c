/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 10:46:56 by zachary       #+#    #+#                 */
/*   Updated: 2020/12/23 17:26:59 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *c)
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
		value = (value * 10) + (*c - 48);
		c++;
	}
	return (int)(value * sign);
}
