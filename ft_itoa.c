#include "ft.h"
#include <stdio.h>

static int ftsz(int n)
{
	int cnt;

	if (n == 0)
		return (1);
	cnt = 0;
	if (n < 0)
		cnt++;
	while(n != 0)
	{
		n /=10;
		cnt++;
	}
	return (cnt);
}


char *ft_itoa(int n)
{
	int		size;
    long	nb;
	char	*p;
    
	size = ftsz(n);
	p = (char *)malloc(sizeof(char) * size);
    nb = n;
	if (n < 0)
	{
		nb *= -1;
		p[0] = 45;
	}
	if (nb == 0)
		p[0] = 48;
	p[size] = '\0';
	while(nb > 0)
	{
		p[size - 1] = (nb % 10) + 48;
		nb /= 10;
		size--;
	}
	return (p);
}
