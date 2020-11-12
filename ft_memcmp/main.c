/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 08:36:31 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/12 09:31:19 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		main(void)
{
	char *s1 = "YOoOOooOo lETS GO GAMER";
	char *s2 = "yOoooOooOo lETS Go GaMER";
	size_t n = 10;
	int val;

	val = ft_memcmp(s1, s2, n);
	printf("Return value is:%d\n", val);
}
