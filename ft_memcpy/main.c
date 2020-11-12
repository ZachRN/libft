/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 20:26:23 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/10 20:38:53 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int		main(void)
{
	char dest[50] = "LMAO THIS IS A TEST";
	char src[50] = "bre\0ak time";
	size_t n = 5;

	ft_memcpy(&dest[10],src,n);
	printf("%s\n",dest);
}