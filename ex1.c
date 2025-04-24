#include<stdio.h>

int ft_iterative_factorial(int nb)
{
    int result = 1;
    
    if (nb < 0)

        return 0;
    

    while (nb > 0)
        
    {
        result *= nb;

        nb--;
    }

        return result;
}

int main ()

{
    int nb;
    int result;

    printf("Choisis un nombre\n");
    scanf("%d",&nb);
    result = ft_iterative_factorial(nb);
    printf("Le resultat de : %d! = %d\n", nb , result);

    return 0;
}
