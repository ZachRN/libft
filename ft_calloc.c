/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/26 11:02:37 by znajda        #+#    #+#                 */
/*   Updated: 2021/01/05 13:49:22 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void *memory;

	memory = malloc(nmeb * size);
	if (nmeb == 0 || size == 0)
		return (memory);
	if (!memory)
		return (NULL);
	ft_bzero(memory, (nmeb * size));
	return (memory);
}
