#include <stdio.h>

int ft_recursive_power(int nb, int pow)
{
    int result;

    result = 1;
    if (pow >= 0)
    {
        while (pow--)
        {
            result = result * nb;
        }
        return result;
    }
    else if (pow < 0)
    {
        while (pow++)
        {
            result = result * nb;
        }
        return 1 / result;
    }
}

int main()
{
    int result = ft_recursive_power(5, 4);
    printf("%d", result);
    return 0;
}