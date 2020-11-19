/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 13:38:18 by zachary       #+#    #+#                 */
/*   Updated: 2020/10/30 13:51:11 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *small, size_t len);

int		main(void)
{
	const char *hay = "Yooo we in there boyo tonighto";
	const char *needle = "lmaoo";
	char	*ptr;
	size_t len = 50;

	ptr = ft_strnstr(hay, needle, len);
	printf("Address: %p :RestStr: %s\n",ptr,ptr);
}