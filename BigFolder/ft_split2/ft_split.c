/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 11:31:06 by znajda        #+#    #+#                 */
/*   Updated: 2020/12/10 12:55:47 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_my_lines(char **strsplit, int line)
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

static char		**strinput(char const *s, int pos[2], int line, char **strholder)
{
	int i;

	i = 0;
	strholder[line] = (char *)malloc((pos[0] - pos[1] + 1) * sizeof(char *));
	if (strholder[line] == NULL)
	{
		free_my_lines(strholder, line);
		return (NULL);
	}
	while (pos[1] < pos[0])
	{
		strholder[line][i] = s[pos[1]];
		pos[1]++;
		i++;
	}
	strholder[line][i] = '\0';
	return (&strholder[0]);
}

static char		**strsplit(char const *s, char c, int numsplits, char **strholder)
{
	int pos[2];
	int line;

	pos[0] = 0;
	line = 0;
	while (s[pos[0]] == c)
		pos[0]++;
	pos[1] = pos[0];
	while (line <= numsplits && s[pos[0] - 1] != '\0')
	{
		if (s[pos[0]] == c || s[pos[0]] == '\0')
		{
			strinput(s, pos, line, strholder);
			if (strholder == NULL)
				break ;
			while (s[pos[0]] == c)
				pos[0]++;
			pos[1] = pos[0];
			line++;
		}
		pos[0]++;
	}
	return (&strholder[0]);
}

static int		splitamount(char const *s, char c)
{
	int pos;
	int numofsplits;

	pos = 0;
	numofsplits = 0;
	while (s[pos] == c)
		pos++;
	while (s[pos] != '\0')
	{
		if (s[pos] == c)
		{
			while (s[pos] == c)
			{
				pos++;
				if (s[pos] == '\0')
					return (numofsplits);
			}
			numofsplits++;
		}
		pos++;
	}
	return (numofsplits);
}

char			**ft_split(char const *s, char c)
{
	char	**strholder;
	int		numofsplits;

	numofsplits = splitamount(s, c);
	strholder = (char **)malloc(numofsplits + 1 * sizeof(char *));
	if (strholder == NULL)
		return (NULL);
	strholder[numofsplits + 1] = NULL;
	strsplit(s, c, numofsplits, strholder);
	if (strholder == NULL)
		return (NULL);
	return (&strholder[0]);
}
