#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *)) 
{
    t_list *newlist;
    t_list *tmp;

    newlist = NULL;
    tmp = lst;
    while (tmp != NULL)
    {
        f(tmp->content);
        ft_lstadd_back(&newlist,lst);
        printf("ok");
        tmp = tmp->next;
    }
    return newlist;
}