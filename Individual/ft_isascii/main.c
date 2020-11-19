/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 10:17:17 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 10:20:04 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isascii(int c);

int		main(void)
{
	int i;

	i = -5;
	while (i < 130)
	{
		printf("Character(%d): %c, isascii:%d\n", i, i, ft_isascii(i));
		i++;
	}
	return (0);
}
