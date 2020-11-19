#include <stdio.h>
#include <stdlib.h>
 int main()
 {
     int dia=0, mes=0, anio=0, i=0;
     printf("Ingrese un anio ");
     scanf("%d",&anio);
    while (anio>0)
	{
     printf("Ingrese un mes ");
     scanf("%d",&mes);
     while((mes<=12)&&(mes>=1)){
     printf("Ingrese un dia ");
     scanf("%d",&dia);
     if (mes==2)
	 {
	while((28>=dia)&&(dia>=1)){
	printf(" Fecha valida ");
	scanf(" ",&i);
	}						
	} else
	{					
	while((31>=dia)&&(dia>=1)){
	printf(" Fecha valida ");
	scanf(" ",&i);
	}
	}
	printf(" Dia Invalido");
	}
	printf(" Mes invalido");
	}
	return 0;
}
