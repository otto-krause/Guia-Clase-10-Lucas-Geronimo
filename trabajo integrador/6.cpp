#include <stdio.h>
#include <stdlib.h>

    int main()
{
    int i=0, Num=0, Factorial=1;
    printf("Ingrese un numero ");
    scanf("%d", &Num);
    for (i=Num;i>1;i--)
    {
    Factorial=Factorial*i;
    }
    printf("El factorial de %llu es  %llu", Num, Factorial);
    return 0;
}
