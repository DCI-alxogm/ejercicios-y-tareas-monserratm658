// Encontrar la suma de 6 numeros guardados en un arreglo manipulando el arreglo con un apuntador
#include <stdio.h>
#include <stdlib.h>
	int main(){
		int n=6;
		int var[n];
		int i,  suma=0;
		int *ptr=NULL;
		ptr=var; //el apuntador apunta al inicio del arreglo
		
		
		var[0]=10;
		var[1]=100;
		var[2]=200;
		
		for(i=0; i<n; i++){
			printf("ingrese el valor para var[%d]: ", i);
			scanf("%d", (var+i));
		}
		for(i = 0; i < 6; i++) {
       			printf("Direccion de var[%d]: %p, Valor: %d\n", i, (ptr + i), *(ptr + i));
        		suma += *(ptr + i);
        	}
        	printf("La suma de los valores es: %d\n", suma);
			
		
	return 0;	
}
