/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 11:15:30 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/19 11:27:32 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	//THIS IS FT_ATOI TEST
	printf("-------------------------")
	printf("THIS IS FT_ATOI TEST");
	const char *str = "38434";
	const char *str2 = "-38434";
	const char *str3 = "da38434";
	const char *str4 = "38da434";

	printf("Number is: %d\n", ft_atoi(str));
	printf("Number is: %d\n", ft_atoi(str2));
	printf("Number is: %d\n", ft_atoi(str3));
	printf("Number is: %d\n", ft_atoi(str4));
	printf("-------------------------")
	printf("THIS IS FT_BZERO TEST");
	char str[50] = "THIS IS A TEST STRING";
	unsigned int n = 10;

	ft_bzero(&str[10], n);
	printf("%s",str);
}