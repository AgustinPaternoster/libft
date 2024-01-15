#include "ft.h"

static void ftstrcpy(char *dst, const char *src , unsigned int start, int len)
{
	int	i;

	i = 0;
	while(i < len)
	{
		dst[i] = src[i + start];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
    char	*p;

	p = (char *)malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	ftstrcpy(p,s,start,(int)len);
	return (p);
}
