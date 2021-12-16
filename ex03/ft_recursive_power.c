int     ft_recursive_power(int nb, int power)
{
        int     result;

        if (power < 0)
        {
                return (0);
        }
        if (power == 0)
        {
                return (1);
        }
        result = nb;
        while (power > 0)
        {
                power--;
                result = nb * ft_recursive_power(nb, power);
                return (result);
        }
        return (result);
}
#include <stdio.h>

int main()
{
    printf("%d", ft_recursive_power(5, 5));
    return 0;
}
