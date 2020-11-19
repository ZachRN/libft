/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 18:04:13 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/04 20:16:32 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int		main(void)
{
	char	dst[15] = "test";
	char	*src = "";
	int		size = 7;
	int		test;

	test = ft_strlcpy(dst, src, size);
	printf("This is a dst test: %s\n", dst);
	printf("This is the copied size: %u", test);
}