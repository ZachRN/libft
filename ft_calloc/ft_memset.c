/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 19:14:40 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/19 13:12:24 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (s == 0)
		return (s);
	while (*str && n > 0)
	{
		*str = c;
		str++;
		n--;
	}
	return (s);
}
