#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft.h"


int main(int argc, char **argv)
{
  (void)argc;
  printf("%d\n", ft_atoi(argv[1]));
  printf("%d\n", atoi(argv[1]));
  return 0;
}