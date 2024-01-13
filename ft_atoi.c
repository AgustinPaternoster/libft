
int ft_isdigit(char n)
{
    if (n > 47 && n < 58 )
        return (1);
    return (0);
}


int ft_atoi(const char *nptr)
{
    int i;
    int result;
    int sign;
    
    i = 0;
    result = 0;
    sign = 1;
    if (nptr[0] == 45 || nptr[0] == 43)
    {
        if(nptr[0] == 45)
            sign *= -1;
        i++;
    }
    while(nptr[i] && ft_isdigit(nptr[i]))
    {
        result *= 10;
        result += (nptr[i] - 48);
        i++;
    }
    return (result * sign);
}