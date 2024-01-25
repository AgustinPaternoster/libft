#include <stdio.h>
#include <stdlib.h>

#ifndef LIST_H
#define LIST_H

typedef struct      s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;


typedef struct data
{
    int nb;
    char a[10];
}Data;

void ftstrcopy(char * dst,char *src, int len);
Data *ftnewdata(int nb,char *str , int len);
t_list *ft_lstnew(void *content);




#endif