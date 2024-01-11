#include <unistd.h>

void *ft_memchr(const void *s, int c, size_t n)
{
// terminar 
    int		i;
	char*	p;

	if (s == NULL)
		return NULL;
	

	p = (char*)s;
	i = 0;
	while(i < n)
	{
		p[i] = c;
		i++;
	} 
	return s;
}
