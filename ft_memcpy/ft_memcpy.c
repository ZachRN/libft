/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 20:26:18 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/10 20:37:30 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *str;
	char *str2;

	str = (char *)dest;
	str2 = (char *)src;
	while (n)
	{
		*str = *str2;
		str++;
		str2++;
		n--;
	}
	return (dest);
}
