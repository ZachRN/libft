/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 10:42:30 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 10:45:43 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_tolower(int c);

int		main(void)
{
	int i;

	i = 0;
	while (i <= 127)
	{
		printf("Old :%c : New :%c\n", i, ft_tolower(i));
		i++;
	}
	return (0);
}
