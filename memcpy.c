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