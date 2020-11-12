/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 07:56:48 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/12 08:32:53 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *temp;

	temp = (char *)s;
	while (temp && n)
	{
		if (*temp == c)
			return (temp);
		temp++;
		n--;
	}
	return (temp);
}
