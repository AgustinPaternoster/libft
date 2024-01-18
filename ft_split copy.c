#include "libft.h"

// void ftclean(char ** split, int i)
// {
//     int len;

//     len = 0;
//     while(len < i)
//     {
//         free(split[len]);
//         len++;
//     }
//     free(split);
// }

// static int  ftlen(const char *str,char c)
// {
//     int    i;

//     i = 0;
//     while(str[i] && str[i] != c)
//         i++;
//     return i;
// }

// static char *ftstrdupc(const char *s , char c)
// {
//     char *p;
//     int size;
//     int i;

//     i = 0;
//     size = ftlen(s,c) + 1;
//     p = (char *)malloc(sizeof(char) * size);
//     if (p == NULL)
//         return (NULL);
//     while (s[i] && s[i] != c)
//     {
//         p[i] = s[i];
//         i++;
//     }
//     p[i] = '\0';
//     return (p);
// }


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
            i--;
        }
    i++;
    }
    return word;
}

// char **ft_split(char const *s, char c)
// {
//     char **split;
//     int size;
//     int i;
//     int j;
//     size = ftcountw(s, c) + 1;
//     split = malloc(sizeof(char*) * size);
//     i = 0;
//     j = 0;
//     if (split == NULL)
//         return (NULL);
//     while( i < size -1)
//     {
//         if(s[j] !=c)
//         {
//             split[i] = ftstrdupc(&s[j], c);
//             i++;
//             if(split[i] == NULL)
//                 {
//                     ftclean(split,i);
//                     return (NULL);
//                 }
//             while (s[j] != c)
//                 j++;
//             j--;
//         }
//     j++;
//     printf("%d\n", i);
//     i++;
//     }
//     split[i] = NULL;
//     return (split);
// }

char **ft_split(char const *s, char c)
{
    (void) s;
    (void) c;
    int size;
    char **split;
    size = ftcountw(s, c) + 1;
    split = malloc(sizeof(char*) * size);
    return (split);
}