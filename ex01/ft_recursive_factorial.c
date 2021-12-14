#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial( int nb)
{   
    if (nb <= 0)  
    {  
        return 0;
    }  
    else if (nb == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        return nb * ft_recursive_factorial(nb-1);  
    }  
    return (nb);
}  

int main()
{
    
    int result = ft_recursive_factorial(3);

    printf("Factorial is %d", result);
    return 0;
}
