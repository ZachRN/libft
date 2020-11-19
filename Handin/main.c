/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 11:15:30 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/19 13:16:12 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	//THIS IS FT_ATOI TEST
	printf("-------------------------\n");
	printf("THIS IS FT_ATOI TEST\n");
	const char *str = "38434";
	const char *str2 = "-38434";
	const char *str3 = "da38434";
	const char *str4 = "38da434";

	printf("Number is: %d\n", ft_atoi(str));
	printf("Number is: %d\n", ft_atoi(str2));
	printf("Number is: %d\n", ft_atoi(str3));
	printf("Number is: %d\n", ft_atoi(str4));
	printf("-------------------------\n");
	printf("THIS IS FT_BZERO TEST\n");
	char str5[50] = "THIS IS A TEST STRING";
	unsigned int n = 10;

	ft_bzero(&str5[10], n);
	printf("%s\n",str);
	printf("-------------------------\n");
	printf("THIS IS FT_STRTRIM TEST\n");
	char str6[50] = "                TEST          ";
	char *trim;
	trim = ft_strtrim(str6, " ");
	printf("%s\n",trim);
	printf("-------------------------\n");
	printf("THIS IS A FT_STRJOIN TEST\n");
	char *str7 = "Testeroni ";
	char *str8 = "PAPERONI";
	char *join;
	join = ft_strjoin(str7,str8);
	printf("%s\n",join);
	printf("-------------------------\n");
	exit(0);
}