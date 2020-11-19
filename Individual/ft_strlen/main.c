/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 11:06:23 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 11:17:02 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(const char *c);

int		main(void)
{
	const char *str = "Hello World!";
	const char *str2 = "";
	const char *str3 = "Hell";
	const char *str4 = " World!";
	const char *str5 = "\n";

	printf("Size of String: %d\n", ft_strlen(str));
	printf("Size of String: %d\n", ft_strlen(str2));
	printf("Size of String: %d\n", ft_strlen(str3));
	printf("Size of String: %d\n", ft_strlen(str4));
	printf("Size of String: %d\n", ft_strlen(str5));
}
