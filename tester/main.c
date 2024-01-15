#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft.h"


int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;
  double *p = calloc(10,sizeof(double));
  for (int i = 0; i < 5; i++)
    printf("%f\n",p[i]);
  return 0;
}