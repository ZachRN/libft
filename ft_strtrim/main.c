/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 17:32:30 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/05 18:11:58 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int		main(void)
{
	char *s1 = "   a        THIS IS A REALLLLY LONG TEXT    a ";
	char *set = " a";
	char *trim;

	trim = ft_strtrim(s1, set);
	printf("This is the front trimmed:%s", trim);
	exit(0);
}
