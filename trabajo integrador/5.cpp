#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0, Menor=0 ; 
    int hom=0, Cont=0, DNI30=0, Portotal=0 ; 
    long int DNI=0;
    float Porc=0; 
    char Sexo;
    do{
        printf("Ingrese su DNI ");
        scanf("%li", &DNI);
        if (DNI>0)
    {
    printf("Ingrese su sexo (m o f) ");
    scanf("%s", &Sexo);
    printf("Ingrese su fecha de nacimiento ",164);
    scanf("%d", &a);
    }
    Portotal=Portotal+1;
    Menor=2020-a;
    if (Menor<18)
    {
    Cont=Cont+1;
    }
    Porc=Cont*100/Portotal;

    if ((DNI<30000000) && (DNI>0))
    {
    DNI30=DNI30+1;
    }
    if (Sexo=='m')
    {
    hom++;
    }
    else 
	Sexo=='f';
    }while (DNI>0);
    printf("total de %d mujeres y %d hombres \n",Portotal-hom,hom);
    printf("Un %.1f %c son menores de edad\n",Porc, 37);
    printf("%d personas tienen un DNI inferior a 30 millones",DNI30);
    return 0;
}
