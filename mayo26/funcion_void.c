#include <stdio.h>
#include <stdlib.h>		//funcion cuadrdao con algumentos de entrada pero sin argumentos de salida
	
	void cuadrado(float *x_ptr, float *x2_ptr);

	int main(void) {
    		float x, x2;

    		printf("Introduce un número:\n");
    		scanf("%f", &x);
   		 cuadrado(&x, &x2);

    		printf("El cuadrado de %f es %f\n", x, x2);
    		return 0;
}
	void cuadrado(float *x_ptr, float *x2_ptr) {
    	*x2_ptr = (*x_ptr) * (*x_ptr);
}

	
	
		
