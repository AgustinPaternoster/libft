#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
int ftcountw(char const *s, char c)
{
    int word;
    int i;

    word = 0;
    i = 0;
    while(s[i])
    {
        if (s[i] != c)
        {
            word++;
            while(s[i] != c)
                i++;
            i--;
        }
    i++;
    }
    return word;
}

int main(int argc, char **argv)
{
  (void)argc;
  char **p = ft_split(argv[1],argv[2][0]);
  for (int i = 0; i < 6; i++)
    printf("1:%s\n",p[i]);
  printf("2:%s\n",p[6]);
  return 0;
}