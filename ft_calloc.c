#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (n != 0 && size > (SIZE_MAX / n))
		return (0);
	total_size = n * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, total_size);
	return (ptr);
}
