#include <unistd.h>

void *memcpy(void *dest, const void *src, size_t n)
{

    char *dst;
    char *str;
    int i;

    if (dest == NULL)
		return NULL;
    
    str = (char*)src;
    dst = (char*)dest;
    i = 0;
    while(i < n)
    {
        dst[i] = str[i];
        i++;
    }
}