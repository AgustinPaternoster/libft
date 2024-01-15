#include "ft.h"

int ft_strlen(const char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return i;
    
}

static void ftstrcpy(char *dst, const char *src)
{
    int i;
    
    i = 0;
    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

char *ft_strdup(const char *s)
{
    char *p;
    int size;

    size = ft_strlen(s) + 1;
    p = (char *)malloc(sizeof(char) * size);
    if (p == NULL)
        return (NULL);
    ftstrcpy(p,s);
    return (p);
}