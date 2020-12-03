/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 11:15:30 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/19 16:38:45 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void ft_atoi_test(void)
{
	printf("THIS IS FT_ATOI TEST\n");
	const char *str = "38434";
	const char *str2 = "-38434";
	const char *str3 = "da38434";
	const char *str4 = "38da434";

	printf("Number is: %d\n", ft_atoi(str));
	printf("Number is: %d\n", ft_atoi(str2));
	printf("Number is: %d\n", ft_atoi(str3));
	printf("Number is: %d\n", ft_atoi(str4));
}
void ft_bzero_test(void)
{
	printf("THIS IS FT_BZERO TEST\n");
	char str5[50] = "THIS IS A TEST STRING";
	unsigned int n = 10;

	ft_bzero(&str5[10], n);
	printf("%s\n",str5);
}

void ft_strchr_test(void)
{
	printf("THIS IS FT_STRCHR TEST\n");
	char *str = "lmao nerd";
	char c = 'y';
	printf("%s\n",ft_strchr(str,c));
}

void ft_strtrim_test(void)
{
	printf("THIS IS FT_STRTRIM TEST\n");
	char str6[50] = "                TEST          ";
	char *trim;
	trim = ft_strtrim(str6, " ");
	printf("%s\n",trim);
}

void ft_strjoin_test(void)
{
	printf("THIS IS A FT_STRJOIN TEST\n");
	char *str7 = "Testeroni ";
	char *str8 = "PAPERONI";
	char *join;
	join = ft_strjoin(str7,str8);
	printf("%s\n",join);
}

void ft_putnbr_fd_test(void)
{
	printf("THIS IS A FT_PUTNBR_FD TEST\n");
	ft_putnbr_fd(5885,1);
	printf("\n");
	ft_putnbr_fd(31231225,1);
	printf("\n");
	ft_putnbr_fd(-5831285,1);
	printf("\n");
	ft_putnbr_fd(-53123185,1);
	printf("\n");
}


int		main(void)
{
	printf("-------------------------\n");
	ft_atoi_test();
	printf("-------------------------\n");
	ft_bzero_test();
	printf("-------------------------\n");
	ft_strtrim_test();
	printf("-------------------------\n");
	ft_strjoin_test();
	printf("-------------------------\n");
	ft_strchr_test();
	printf("-------------------------\n");
	ft_putnbr_fd_test();
	printf("-------------------------\n");
	exit(0);
}
