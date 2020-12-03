/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 15:51:36 by znajda        #+#    #+#                 */
/*   Updated: 2020/11/05 16:06:30 by znajda        ########   odam.nl         */
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

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		y;
	int		z;
	char	*s3;

	x = ft_strlen(s1);
	y = ft_strlen(s2);
	z = 0;
	s3 = (char *)malloc(sizeof(char) * (x + y + 1));
	if (s3 == NULL)
		return (NULL);
	while (s1[z] != '\0')
	{
		s3[z] = s1[z];
		z++;
	}
	x = 0;
	while (s2[x] != '\0')
	{
		s3[z] = s2[x];
		x++;
		z++;
	}
	s3[z] = '\0';
	return ((char *)&s3[0]);
}
