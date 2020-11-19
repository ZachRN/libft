/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 07:56:54 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/12 08:34:58 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int		main(void)
{
	char *src = "This is a test string, get destroyed people";
	char c = '\0';
	size_t n = 100;

	src = ft_memchr(src,c,n);
	printf("Pointer Location in string:%p\nAnd the String:%s",src,src);
}
