/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 20:26:23 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/12 11:37:58 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int		main(void)
{
	char dest[50] = "LMAO THIS IS A TEST";
	char *src = dest+14;
	size_t n = 10;

	ft_memcpy(dest,src,n);
	printf("%s\n",dest);
}