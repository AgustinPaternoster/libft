#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL) 
		return;
    if (*lst == NULL)
        *lst = new;
    else
    {        
        t_list * last = ft_lstlast(*lst);
        last->next = new;
    }
}