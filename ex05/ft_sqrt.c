
int ft_sqrt(int nb)
{
    int temp;
    int sqrt;

    temp = 0;
    sqrt = nb / 2;

    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (nb / temp + temp) / 2;
    }
    return(sqrt);
}

#include <stdio.h>
int main()
{
    printf("the square root of 25 is: %d", ft_sqrt(25));
    return 0;
}