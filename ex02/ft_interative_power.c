
int ft_iterative_power(int nb, int power)
{
    int result;

    if (power < 0)
    {
        return (0);
    }   
    if (power == 0)
    {
        return (1);
    }
    result = nb;
    while (power > 1)
    {
        nb *= result;
        power--;
    }
    return (nb);            
}

#include <stdio.h>
int main()
{
    printf("%d", ft_iterative_power(5, 5));
    return 0;
}