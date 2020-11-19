/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 20:15:48 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/10 20:22:11 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int		main(void)
{
	char str[50] = "THIS IS A TEST STRING";
	unsigned int n = 10;

	ft_bzero(&str[10], n);
	printf("%s",str);
	
}