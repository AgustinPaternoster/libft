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
    char    *str;
    size_t  lenlt;
    
    str = (char *)big;
    lenlt = (size_t)ft_strlen(little);
    i = 0;
    if (little == NULL)
        return (str);
    while(str[i] && i + lenlt <= len)
    {
        j = 0;
        if(str[i] == little[j])
            {
                while(little[j] == str[i+j])
                    j++;
                if(j == lenlt)
                    return (&str[i]);
            }
        i++;
    }
    return (0);
}
