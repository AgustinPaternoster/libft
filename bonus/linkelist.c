#include "libft.h"


void ftstrcopy(char * dst,char *src, int len)
{
    int i = 0;
    while(src[i] && i < len -1)
    {
        dst[i] = src [i];
        i++;
    }
    dst[i] = '\0';
}

Data *ftnewdata(int nb,char *str , int len)
{
    Data *p = malloc(sizeof(Data));
    p->nb = nb;
    ftstrcopy(p->a , str , len);
    return p;
}

void delete(void * data)
{
    Data *p = (Data *)data;
    free(p);
}

void printlst(void * content)
{
    Data * p = content;
    printf("%d\n",p->nb); 
}

void suma(void * content)
{
    Data * p = content;
    p->nb += 10;
}

