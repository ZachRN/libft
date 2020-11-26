/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/26 09:45:39 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/26 10:28:51 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char str[50] = "YoooOOoOOoO TESTERONI";
	char *ptr;

	ptr = ft_strdup("this is actually just a test to see if this works at a really really long string legnth");
	printf("%s", ptr);
	exit(0);
}