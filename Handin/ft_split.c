/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 12:01:49 by znajda        #+#    #+#                 */
/*   Updated: 2020/12/03 16:37:49 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_my_lines(char **strsplit, int line)
{
	int i;

	i = 0;
	while (i < line)
	{
		free(strsplit[i]);
		i++;
	}
	free(strsplit);
}

static char	**wordinput(char const *s, int pos[2], int line, char **strsplit)
{
	int i;
	int j;

	i = 0;
	j = 0;
	strsplit[line] = (char *)malloc((pos[0] - pos[1] + 1) * sizeof(char *));
	if (strsplit[line] == NULL)
	{
		free_my_lines(strsplit, line);
		return (NULL);
	}
	while (pos[1] < pos[0])
	{
		strsplit[line][i] = s[pos[1]];
		pos[1]++;
		i++;
	}
	strsplit[line][i] = '\0';
	return (&strsplit[0]);
}

static char	**wordfill(char const *s, char c, char **strsplit)
{
	int pos[2];
	int line;

	pos[0] = 0;
	line = 0;
	while (s[pos[0]] == c)
		pos[0] += 1;
	pos[1] = pos[0];
	while (s[pos[0]] != '\0')
	{
		if (s[pos[0]] == c && pos[0] - pos[1] != 0)
		{
			wordinput(s, pos, line, strsplit);
			if (strsplit == NULL)
				return (NULL);
			while (s[pos[0]] == c)
				pos[0]++;
			pos[1] = pos[0];
			line++;
		}
		pos[0]++;
	}
	return (&strsplit[0]);
}

static void		count_final_finder(const char *s, char c, int numbers[2])
{
	int		pos;

	pos = 0;
	numbers[0] = 0;
	while (s[pos] == c)
		pos++;
	while (s[pos] != '\0')
	{
		pos++;
		if (s[pos] != c && s[pos - 1] == c && s[pos] != '\0')
		{
			numbers[0]++;
			numbers[1] = pos;
		}
	}
}

char			**ft_split(char const *s, char c)
{
	char	**strsplit;
	int		numbers[2];

	if (!s)
		return (NULL);
	count_final_finder(s, c, numbers);
	strsplit = (char **)malloc(numbers[0] + 1 * sizeof(char *));
	if (strsplit == NULL)
		return (NULL);
	strsplit[numbers[0] + 1] = NULL;
	wordfill(s, c, strsplit);
	if (strsplit == NULL)
		return (NULL);
	return (&strsplit[0]);
}
