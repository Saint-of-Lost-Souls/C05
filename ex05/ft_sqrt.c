
int     ft_sqrt(int nb)
{
        int     i;

        if (nb < 0)
        {
                return (0);
        }
        i = 1;
        while (1 <= nb && i <= 46430)
        {
                if (i * i == nb)
                {
                        return (i);
                }
                else
                {
                        i++;
                }
        }
        return (0);
}

#include <stdio.h>
int main()
{
    printf("the square root of 36 is: %d", ft_sqrt(36));
    return 0;
}