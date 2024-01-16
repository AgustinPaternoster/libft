#include "ft.h"

// verificar opcion si little es nulo
int ft_strlen(const char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return i;
    
}

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  lenlt;

    lenlt = (size_t)ft_strlen(little);
    i = 0;
    if (little == NULL)
        return ((char*)big);
    while(big[i] && i + lenlt <= len)
    {
        j = 0;
        if(big[i] == little[j])
            {
                while(little[j] == big[i+j])
                    j++;
                if(j == lenlt)
                    return ((char *)big + i);
            }
        i++;
    }
    return (0);
}
