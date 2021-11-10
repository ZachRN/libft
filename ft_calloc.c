#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*memory;

	if (nmeb == 0 || size == 0)
	{
		nmeb = 1;
		size = 1;
	}
	memory = malloc(nmeb * size);
	if (memory)
		ft_bzero(memory, (nmeb * size));
	return (memory);
}
