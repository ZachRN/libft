/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 10:05:03 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 10:10:56 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isdigit(int c);

int		main(void)
{
	int i;

	i = 0;
	while (i <= 127)
	{
		printf("Character(%d): %c, isdigit:%d\n", i, i, ft_isdigit(i));
		i++;
	}
	return (0);
}
