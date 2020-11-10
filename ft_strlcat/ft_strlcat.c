/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 20:21:00 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/07 18:55:21 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;

	x = 0;
	y = 0;
	z = 0;
	while (dst[x] != '\0')
		x++;
	while (src[z] != '\0')
		z++;
	while (src[y] != '\0' && y < size)
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	if (src[y] == '\0' && y < size)
		y--;
	dst[x] = '\0';
	return (z + y);
}
