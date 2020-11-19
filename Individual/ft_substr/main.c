/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 14:37:25 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/10 05:12:54 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const*s, unsigned int start, size_t len);

int		main(void)
{
	char *s = "LET";
	char *sub;
	unsigned int start = 4;
	unsigned int len = 15;

	//testeroni 2
	sub = ft_substr(s, start, len);
	printf("This is a substring test:%s", sub);
	exit(0);
}
