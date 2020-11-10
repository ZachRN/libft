/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 20:20:58 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/07 17:23:46 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);

int		main(void)
{
	char dst[50] = "Boo ";
	char *src = "Let us test!";
	int size = 5;
	int test;

	test = ft_strlcat(dst, src, size);
	printf("This is a dst test:%s\n", dst);
	printf("This is the copied size:%d\n", test);
	return (0);
}