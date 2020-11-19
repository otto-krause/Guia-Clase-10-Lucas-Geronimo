#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,num1=0,num2=0,res=0,dea=0,acu=0;
	printf("Ingrese un numero positivo a multiplicar ");
	scanf("%d %d",&num1,&num2);
	for (i=1;i<=num2;i++){
	res=num1;
	acu=acu+res;
	}
	printf("El resultado es %d",acu);
	return 0;
}
