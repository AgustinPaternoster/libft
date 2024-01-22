#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nb;
    char c;

    nb = n;
    if (n < 0)
    {
        nb *= -1;
        write(fd,'-',1);

    }

    if (nb > 9)
    {
        ft_putnbr_fd(nb / 10 , fd);
    }

    c = (nb % 10) + 48;
    write(fd ,&c, 1);
}