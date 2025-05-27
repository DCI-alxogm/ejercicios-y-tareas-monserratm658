#include <stdio.h>
#include <stdlib.h>		//funcion cuadrado con argumentos de salida, pero sin argumentos de entrada

	void cuadrado(float *x_ptr, float *x2_ptr);
	int main(void) {
    	float x, x2;

    	cuadrado(&x, &x2);

    	printf("El cuadrado de %f es %f\n", x, x2);
    	return 0;
}
	void cuadrado(float *x_ptr, float *x2_ptr) {
   	 printf("Introduce un número:\n");
    	scanf("%f", x_ptr);  
    	*x2_ptr = (*x_ptr) * (*x_ptr);  
}
