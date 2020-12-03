/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 12:00:36 by znajda        #+#    #+#                 */
/*   Updated: 2020/12/03 16:23:33 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);

int		main(void)
{
	char *str = "a i might ofa fixed somethinga untinetionallya";
	char delim = 'a';
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