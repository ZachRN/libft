/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 15:51:30 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/05 16:15:31 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);

int		main(void)
{
	char *s1 = "Yo Lets Glow ";
	char *s2 = "Absolute gamer";
	char *s3;

	s3 = ft_strjoin(s1, s2);
	printf("This is the combined text:%s", s3);
	exit(0);
}
