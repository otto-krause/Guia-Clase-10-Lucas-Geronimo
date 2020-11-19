  
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int fac,cant,pu,nump,pmv,mv,vtotal,i=0;
	printf("\n Ingrese la factura ");
	scanf("%d",&fac);	
	while (fac!=999){	
	printf("\n Ingrese la cantidad ");
	scanf("%d",&cant);
	printf("\n Ingrese el precio unitario ");
	scanf("%d",&pu);		
	printf("\n Ingrese el numero de producto ");
	scanf("%d",&nump);			
	vtotal=cant*pu;
	if (vtotal>mv){
	mv=vtotal;
	}
	if (cant>pmv) {
	pmv=nump;
	}
	}
	printf("\n El mayor importe fue %d ",mv);
	printf("\n El producto mas vendido fue %d ",pmv);
	return 0;
}
