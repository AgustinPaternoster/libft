#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft.h"

int main(int argc, char **argv)
{
  (void)argc;
  char *p = ft_itoa(atoi(argv[1]));
  printf("%s\n",p);
  return 0;
}