/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 11:14:09 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 12:07:08 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c);

int		main(void)
{
	const char *str = "THIS IS A REALLY LONG STRING WITHOUT THE LETTER Z UNTIL THAT PART";
	const char *str2 = "this\0 is a test";
	char *ptr;
	char *ptr3;
	char z = 'Q';
	char space = '\0';

	ptr = ft_strchr(str, z);

	ptr3 = ft_strchr(str2, space);
	printf("char :%c, address: %p, reststr:%s\n", z, ptr, ptr);
	printf("char :%c, address: %p, reststr:%s\n", space, ptr3, ptr3);
	printf("pos of term :%p\n", &str2[4]);
	return (0);
}
