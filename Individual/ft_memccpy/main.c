/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 07:27:42 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/12 07:36:37 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

int		main(void)
{
	char dest[50];
	char *src = "This is a great test";
	char c = 'r';
	size_t len = 25;

	ft_memccpy(dest, src, c, len);
	printf("This is the src:%s\n", dest);
}
