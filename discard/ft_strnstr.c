#include "ft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    char    *str;
    
    str = (char *)big;
    i = 0;
    if (little == NULL)
        return (str);
    while (str[i])
    {
        j = 0;
        if (str[i] == little[j])
        {
            while (str[i+j] == little[j] && j < len && little[i])
            {
                if(j == len || little[i])
                    return(&str[i]);
                j++;
            }
        }
        i++;
    }
    return (NULL);   
}