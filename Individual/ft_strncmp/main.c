/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 12:23:10 by zachary       #+#    #+#                 */
/*   Updated: 2020/11/09 02:50:14 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t len);

int		main(void)
{
	const char *s1 = "might be a Strong Word";
	const char *s2 = "Might be a Strong Word";
	size_t len = 1;
	int x;
	int y;

	x = ft_strncmp(s1, s2, len);
	y = strncmp(s1, s2, len);
	printf("My Function Returned: %d\n", x);
	printf("Real Function Returned: %d\n", y);
}
