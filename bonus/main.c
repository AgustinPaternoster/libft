#include "list.h"

void test (t_list ** list)
{
    printf("%p\n", list);
    printf("%p\n", *list);
}

int main(int arc , char **argv)
{
    (void)arc;
    (void)argv;
    Data * uno = ftnewdata(5,argv[1],10);
    t_list * lista = NULL;

    t_list * nodo1 = ft_lstnew(uno);
    lista = nodo1;
    test(&lista);
    printf("%p\n", nodo1);
    return 0;
}