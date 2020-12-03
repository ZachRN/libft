/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 19:14:42 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/09 21:43:39 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int		main(void)
{
	char str[50] = "This is a string I want to change memory of";
	size_t n = 15;

	ft_memset(&str[15], '.', n);
	printf("%s\n", str);
}
