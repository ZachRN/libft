/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 10:34:28 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 10:40:27 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_toupper(int c);

int		main(void)
{
	int i;

	i = 0;
	while (i <= 127)
	{
		printf("Original: %c : New: %c\n", i, ft_toupper(i));
		i++;
	}
	return (0);
}
