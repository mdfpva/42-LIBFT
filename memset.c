void	*memset(void *p, int c, int length)
{
	unsigned int	i;
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
