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
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));








#endif