#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cociente, num1, num2, resto;
    printf( "\n   Introduzca dividendo (entero): " );
    scanf( "%d", &num1 );
    printf( "\n   Introduzca divisor (entero): " );
    scanf( "%d", &num2);
    if ( num1 > 0 && num2 > 0 )
    {
        cociente = 0;
        resto = num1;

        while ( resto >= num2 )
        {
            resto -= num2;
            cociente++;
        }
        printf( "\n   %d div %d = %d ( Resto = %d )", num1, num2, cociente, resto );
    }
    else
        printf( "\n   ERROR: Ambos numeros deben ser mayores que cero.", 163 );
    return 0;
}
