#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	int				i;
    unsigned char	*p;

    p = s;
	i = 0;
    while(i < n)
    {
		p[i] = '\0';
		i++;
    }
}