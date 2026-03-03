#include "libft.h"

void	ft_bzero(void *p, size_t length)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)p;
	i = 0;
	while (i < length)
	{
		ptr[i] = 0;
		i++;
	}
}
