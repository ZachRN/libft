#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while ((a[i] == b[i]) && (a[i] != '\0' && b[i] != '\0') && (i < len))
	{
		i++;
	}
	if (i < len)
		return (a[i] - b[i]);
	return (0);
}
