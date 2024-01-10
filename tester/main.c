#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void *memcpy(void *dest, const void *src, size_t n)
{

    unsigned char *dst;
    unsigned char *str;
    int i;

    str = src;
    dst = dest;
    i = 0;
    while(i < n)
    {
        dst[i] = src[i];
        i++;
    }

}

int main(int argc, char **argv)
{
  return 0;
}