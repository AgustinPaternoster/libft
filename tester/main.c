#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
  printf("%d\n",ft_strncmp(argv[1],argv[2],4));
  printf("%d\n",strncmp(argv[1],argv[2],4));
  return 0;
}