/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 20:21:00 by zachary       #+#    #+#                 */
/*   Updated: 2021/01/04 15:03:52 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//when coming back to this tomorrow, this is strlcpy which i already made

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
