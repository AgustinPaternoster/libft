#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char*	p;

	if (s == NULL)
		return NULL;

  	p = (char*)s;
	i = 0;
  	while(i < n)
  	{
		p[i] = '\0';
		i++;
  	}
}