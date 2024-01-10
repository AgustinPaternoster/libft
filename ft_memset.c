#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	unsigned char *p;

	p = s;
	i = 0;
	while(i < n)
	{
		p[i] = c;
		i++;
	} 
	return s;
}