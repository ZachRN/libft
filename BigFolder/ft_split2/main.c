/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:10:47 by znajda        #+#    #+#                 */
/*   Updated: 2020/12/10 13:01:34 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);

int		main(void)
{
	char *str = "test test test test";
	char delim = 't';
	char **strtest;
	int i = 0;
	int j = 0;
	strtest = ft_split(str, delim);
	while (strtest[i] != NULL)
	{
		printf("word:%s\n",strtest[i]);
		i++;
	}
	printf("test end\n");
	exit(0);
}