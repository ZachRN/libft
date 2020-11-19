/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 19:14:40 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/10 04:48:52 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (s == 0)
		return (s;
	while (*str && n > 0)
	{
		*str = c;
		str++;
		n--;
	}
	return (s);
}
