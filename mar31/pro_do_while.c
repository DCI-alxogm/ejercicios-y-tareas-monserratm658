#include <stdio.h>
#include <math.h>
	#include <stdio.h>

	int main() {
    	int numero_i, numero_f, intervalo, x, continuar;
    	do{
    	do {
        printf("ingresa un número positivo inicial: ");
        scanf("%d", &numero_i);
        
        printf("ingresa un numero positivo final: ");
        scanf("%d", &numero_f);
        
        printf("ingresa un valor para el inervalo: ");
        scanf("%d", &intervalo);
        if (numero_i <= 0 || numero_f <= 0 || intervalo <= 0) {
            printf("ingresa solo números positivos para los tres valores.\n");
        }
        } while (numero_i <= 0 || numero_f <= 0 || intervalo <= 0);
        
        for (x = numero_i; x <= numero_f; x += intervalo){
        int cuadrado = x * x;  
        
        printf("El cuadrado de %d es: %d\n", x, cuadrado);
        }
        printf("¿Quieres realizar otro calculo? (s/n): ");
        scanf(" %lc", &continuar);
         } while (continuar == 's' || continuar == 'S');
         printf("GRACIAS \n");
         return 0;
	
}
