#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (small[0] == '\0')
		return ((char *)&big[0]);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((big[i + j] == small[j]) && (i + j < len) && big[i + j] != '\0')
		{
			j++;
			if (small[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
