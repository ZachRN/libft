/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 17:32:32 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/05 18:16:44 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char const *s1)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

static int	trimmer(char const *s1, char const *set, int i)
{
	int j;

	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
			return (1);
		j++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		end;
	int		i;
	char	*str;

	front = 0;
	i = 0;
	end = ft_strlen(s1) - 1;
	while (trimmer(s1, set, front) == 1)
		front++;
	while (trimmer(s1, set, end) == 1)
		end--;
	str = (char *)malloc(sizeof(char) * (end - front + 1));
	while (front <= end)
	{
		str[i] = s1[front];
		front++;
		i++;
	}
	str[i] = '\0';
	return ((char *)&str[0]);
}
