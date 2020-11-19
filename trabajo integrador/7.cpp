#include <stdio.h>
    #include <stdlib.h>

    int main()
{
    int Num, Producto, i=1;
    printf("Ingresar numero entero ");
    scanf("%d", &Num);
    do
    {
    Producto=Num*i;
    printf("\n%d*%d=%d", i, Num, Producto);
    i++;
    }while(i<11);
    return 0;
}
