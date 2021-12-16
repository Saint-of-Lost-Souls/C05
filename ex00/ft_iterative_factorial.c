int     ft_iterative_factorial(int nb)
{
        int     result;

        if (nb < 0)
        {
                return (0);
        }
        if (nb == 0)
        {
                return (1);
        }
        result = 1;
        while (nb)
        {
                result *= nb;
                nb--;
        }
        return (result);
}


#include <stdio.h>
int	main(void)
{	
	printf("%d\n", ft_iterative_factorial(3));
}