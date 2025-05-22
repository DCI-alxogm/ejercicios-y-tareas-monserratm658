//Encontrar la suma de 6 numeros guardados en un arreglo, declarando y asignando memoria a un apuntador y manipulando como arreglo.
#include <stdio.h>
	int main(){
		int n=6;
		int var[n];
		int *ip=NULL;
		int i,suma, *ptr;
		ptr=&var[0]; //el apuntador apunta al inicio del arreglo
		
		printf("la direccion inicial almacenada en el apuntador es %p \n", ip);
		
		
		var[0]=10;
		var[1]=100;
		var[2]=200;
		var[3]=300;
		var[4]=400;
		var[5]=500;
		
		for (i=0; i<n; i++){
			printf("ingrese el valor para var[%d]: ", i);
			scanf("%d", &var[i]);
		}
		for(i = 0; i < 6; i++) {
       			printf("Direccion de var[%d]: %p, Valor: %d\n", i, (ptr + i), *(ptr + i));
        		suma += *(ptr + i);
        	}
        	printf("La suma de los valores es: %d\n", suma);
			
		
	return 0;	
}
