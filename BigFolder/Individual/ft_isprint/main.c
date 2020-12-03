/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 10:24:52 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 10:32:58 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isprint(int c);

int		main(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 127)
	{
		printf("Character(%d): %c, isprint(%d)\n", i, i, ft_isprint(i));
		if (ft_isprint(i) == 1)
			j++;
		i++;
	}
	printf("%d", j);
}
