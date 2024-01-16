char *ftfill(char *p , int nb , int size)
{
    if (nb > 9)
        ftfill(nb / 10);
    
}


void ft_itoa(int n)
{
	int		i;
    long	nb;
	char	str[20];
    
	// crear malloc
    nb = n;
    if (n < 0)
	{
		nb *= -1;
		printf("-");
		//agregar signo;
	}
	i = 0;
	if(nb > 9)
	{
		ft_itoa(nb/10);
	}
	char p = (nb % 10) + 48;
	printf("%c",p);


}