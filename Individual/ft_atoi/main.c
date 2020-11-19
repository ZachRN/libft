/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 10:58:00 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 11:04:00 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str);

int		main(void)
{
	const char *str = "38434";
	const char *str2 = "-38434";
	const char *str3 = "da38434";
	const char *str4 = "38da434";

	printf("Number is: %d\n", ft_atoi(str));
	printf("Number is: %d\n", ft_atoi(str2));
	printf("Number is: %d\n", ft_atoi(str3));
	printf("Number is: %d\n", ft_atoi(str4));
	return (0);
}
