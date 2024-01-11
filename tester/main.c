#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char **argv)
{
 int a[10] ={1,2,3,4,5,6};
 int * p = memchr(a,2,sizeof(int) * 3);
  printf("%d\n", p[0]);
  return 0;
}