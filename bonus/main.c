#include "libft.h"



int main(int arc , char **argv)
{
    (void)arc;
    (void)argv;

    //void (*del)(void *data)= delete;
    Data * uno = ftnewdata(5,"test1",10);
    Data * dos = ftnewdata(5,"test2",10);
    Data * tres = ftnewdata(5,"test3",10);

    t_list * lista = NULL;

    t_list * nodo1 = ft_lstnew(uno);
    t_list * nodo2 = ft_lstnew(dos);
    t_list * nodo3 = ft_lstnew(tres);

    
    ft_lstadd_front(&lista,nodo1);
    ft_lstadd_front(&lista,nodo2);
    ft_lstadd_front(&lista,nodo3);

    ft_lstiter(lista,printlst);

    
    

    return 0;
}