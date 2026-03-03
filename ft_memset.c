#include "libft.h"

void	*ft_memset(void *p, int c, size_t length)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)p;
	value = (unsigned char)c;
	i = 0;
	while (i < length)
	{
		ptr[i] = value;
		i++;
	}
	return (p);
}
