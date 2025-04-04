#include<stdio.h>
#include<math.h>
	int evaluar_funciones(double x);
	int main() {
		
		double inicio, fin, espaciado, x;
		printf("introduce el valor de x: ");
		scanf("%lf", &x); 
		{
		if (x > 0) {
		printf("log(x) = %.4f\n", log(x)); 
		} else {
		printf("log(x) no está definido para x <= 0\n");}
		if (x >= 0) {
		printf("sqrt(x) = %.4f\n", sqrt(x)); 
		} else {
		
		printf("sqrt(x) no está definido para x < 0\n");}
		printf("exp(x) = %.4f\n", exp(x));   
		printf("sin(x) = %.4f\n", sin(x));
		printf("cos(x) = %.4f\n", cos(x));   
		printf("\n");}
		printf("Introduce el valor inicial del intervalo: ");
		scanf("%lf", &inicio);
		printf("Introduce el valor final del intervalo: ");
		scanf("%lf", &fin);
		printf("Introduce el espaciado entre los valores de x: ");
		scanf("%lf", &espaciado);
		
		for (double x = inicio; x <= fin; x += espaciado) {
		printf("Para x = %.2f:\n", x);
		printf("%d\n", evaluar_funciones(x));  

		}

    return 0;
}
		int evaluar_funciones(double x) {
    		if (x > 0) {
        	printf("log(x) = %.4f\n", log(x)); 
    		} else {
        	printf("log(x) no está definido para x <= 0\n");
    		}

    		if (x >= 0) {
        	printf("sqrt(x) = %.4f\n", sqrt(x)); 
    		} else {
        	printf("sqrt(x) no está definido para x < 0\n");
    		}	

    		printf("exp(x) = %.4f\n", exp(x));   
    		printf("sin(x) = %.4f\n", sin(x));
    		printf("cos(x) = %.4f\n", cos(x));   
    
    return 0;  
}

