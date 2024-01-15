#include "ft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    int *p;
    size_t i;

    i = 0;
    p = (int*)malloc(nmemb * size);
    if (p == NULL)
        return (NULL);
    while(i < nmemb)
    {
        p[i] = 0;
        i++;
    }
    return (void*)p;
}
