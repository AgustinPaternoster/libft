#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft.h"


int main(int argc, char **argv)
{
  (void)argc;
  char *p = ft_strjoin(argv[1],argv[2]);
  printf("%s\n", p);
  return 0;
}