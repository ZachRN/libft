/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/26 09:45:41 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/26 10:28:36 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//use memset maybe here? JUST KIDDING MEMSET DOESNT WORK SMILE

char	*ft_strdup(const char *s)
{
	char *str;
	int strlen;
	int i;

	strlen = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (strlen + 1));
	if (!s)
		return (NULL);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < strlen)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (&str[0]);
}
