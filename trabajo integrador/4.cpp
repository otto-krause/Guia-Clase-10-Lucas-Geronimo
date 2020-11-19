#include <stdlib.h>
#include <stdio.h>
 int main()
 {
    int i=0,Cont1=0, Cont2=0, Cont3=0, Cont4=0, ProMayor=0, mayora, alumno;
    float Pro=0, ProG=0, acu=0, acu1=0, Nota1=0, Notatp=0;
    i=1;
    do
    {
    printf(" Ingresar nota del TP del alumno %d\n", i);
    scanf("%f", &Notatp);
    Cont1=Cont1+1;
    printf("Ingrese las notas de actividades del mismo \n");//para finalizar utilice un numero negativo//
    do
    {
    scanf("%f", &Nota1);
    if (Nota1>0)
    {
    Cont2=Cont2+1;
    acu=acu+Nota1;
    }
    if (Cont1<3)
    {
    Cont3=Cont3+1;
    }
    }while(Nota1>0);
    acu=acu+Notatp;
    Pro=acu/Cont1;
    printf("El promedio del alumno %d es %.1f\n", i, Pro);
    acu1=acu1+Pro;
    if (Pro>ProMayor)
    {
    ProMayor=Pro;
    mayora=i;
    }
    if (Notatp>5)
    {
    Cont4=Cont4+1;
    }
    i++;
    }
	while(i<3);
    ProG=acu1/i;
    printf("\nEl promedio general del curso es %.1f\n", ProG);
    printf("El alumno con mayor promedio es %d\n", mayora);
    printf("%d son los alumnos con 2 o menos notas ingresadas\n", Cont1);
    printf("%d  aprobaron el TP",Cont4);
    return 0;
}

