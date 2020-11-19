/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 07:27:44 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/12 07:36:19 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *str;
	char *org;

	str = (char *)dest;
	org = (char *)src;
	while (n && *org != c)
	{
		*str = *org;
		str++;
		org++;
		n--;
	}
	return (dest);
}
