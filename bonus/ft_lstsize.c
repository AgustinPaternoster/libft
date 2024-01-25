#include "list.h"

int ft_lstsize(t_list *lst)
{
    int result;
    t_list *tmp;

    tmp = lst;
    result = 0;
    while(tmp != NULL)
    {   tmp = tmp->next;
        result++;
    }
    return (result);
}