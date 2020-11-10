/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha_test.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 09:52:27 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 10:01:59 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isalpha(int c);

int		main(void)
{
	int i;

	i = 0;
	while (i <= 127)
	{
		printf("Character(%d): %c, isalpha:%d\n", i, i, ft_isalpha(i));
		i++;
	}
	return (0);
}
