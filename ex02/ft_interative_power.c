#include <stdio.h>

int ft_iterative_power(int nb, int pow)
{
    int result;

    if (pow <= 0 || nb <=0)
    {
        return (0);
    }   
    result = 1;
    while (pow > 0)
    {
        result = result * nb;
        pow--;
    }
    return (result);            
}

int main()
{
    printf("%d", ft_iterative_power(5, 5));
    return 0;
}