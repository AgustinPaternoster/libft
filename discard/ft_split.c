#include "libft.h"

static char **ftclean(char ** split, int i)
{
    int len;

    len = 0;
    while(len < i)
    {
        free(split[len]);
        len++;
    }
    free(split);
    return (0);
}

static int  ftlen(const char *str,char c)
{
    int    i;

    i = 0;
    while(str[i] && str[i] != c)
        i++;
    return i;
}

static char *ftstrdupc(const char *s , char c)
{
    char *p;
    int size;
    int i;

    i = 0;
    size = ftlen(s,c) + 1;
    p = (char *)malloc(sizeof(char) * size);
    if (p == NULL)
        return (0);
    while (i < size - 1)
    {
        p[i] = s[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}



static int ftcountw(char const *s, char c)
{
    int word;
    int i;

    word = 0;
    i = 0;
    while(s[i])
    {
        if (s[i] != c)
        {
            word++;
            while(s[i] != c)
                i++;
        }
    i++;
    }
    return word;
}

char **ft_split(char const *s, char c)
{
    char **split;
    int size;
    int i;
    int j;
    
    size = ftcountw(s, c) + 1;
    split = malloc(sizeof(char*) * size);
    if(split == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while(i < size - 1)
    {
        if (s[j] != c)
        {
            split[i] = ftstrdupc(&s[j], c);
            if (split[i] == 0)
                return (ftclean(split,i));
            i++;
            while (s[j] != c)
                j++;
        }
    j++;
    }
    split[i] = NULL;
    return (split);
}