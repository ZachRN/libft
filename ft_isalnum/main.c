/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 10:09:25 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 10:13:52 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isalnum(int c);

int		main(void)
{
	int i;

	i = 0;
	while (i <= 127)
	{
		printf("Character(%d): %c, isalnum:%d\n", i, i, ft_isalnum(i));
		i++;
	}
	return (0);
}
