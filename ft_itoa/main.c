/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/26 07:59:29 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/26 09:22:36 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char *str;
	str = ft_itoa(12343);
	printf("number is:%s\n",str);
	str = ft_itoa(5332);
	printf("number is:%s\n",str);
	str = ft_itoa(-312);
	printf("number is:%s\n",str);
	str = ft_itoa(0);
	printf("number is:%s\n",str);
	str = ft_itoa(1);
	printf("number is:%s\n",str);
	str = ft_itoa(-2312313);
	printf("number is:%s\n",str);
	exit(0);
}