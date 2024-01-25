#include "libft.h"

void delete(void * data)
{
    Data *p = (Data *)data;
    free(p);
}


int main(int arc , char **argv)
{
    (void)arc;
    (void)argv;

    void (*del)(void *data)= delete;
    Data * uno = ftnewdata(5,"test1",10);
    Data * dos = ftnewdata(5,"test2",10);
    Data * tres = ftnewdata(5,"test3",10);

    t_list * lista = NULL;
    printf("%p\n",lista);

    t_list * nodo1 = ft_lstnew(uno);
    t_list * nodo2 = ft_lstnew(dos);
    t_list * nodo3 = ft_lstnew(tres);

    
    ft_lstadd_front(&lista,nodo1);
    ft_lstadd_front(&lista,nodo2);
    ft_lstadd_front(&lista,nodo3);

    printf("%d\n",ft_lstsize(lista));
    ft_lstclear(&lista,del);
    printf("%d\n",ft_lstsize(lista));
    printf("%p\n",lista);

    
    

    return 0;
}