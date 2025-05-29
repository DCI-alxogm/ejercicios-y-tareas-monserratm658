//funcion sin argumentos de entrada y apuntadores

#include <stdio.h>
#include <stdlib.h>

void convertirTemperaturas() {
    int n = 20;
    float TCi, TCf;
    float *TC, *TK;
    float delta;

    // Asignación dinámica de memoria
    TC = (float *)malloc((n + 1) * sizeof(float));
    TK = (float *)malloc((n + 1) * sizeof(float));
    
        // Verificación por si malloc falla

    if (TC == NULL || TK == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }
	// Solicita al usuario el valor inicial y final de temperatura en Celsius
    printf("Ingresa el valor para TCi: \n");
    scanf("%f", &TCi);
    printf("Ingresa el valor para TCf: \n");
    scanf("%f", &TCf);
	// Calcula el tamaño del paso entre cada temperatura
    delta = (TCf - TCi) / n;
    printf("La temperatura en kelvin es: (n = %d): \n", n);
    
	    // Llenado de los arreglos y conversión de Celsius a Kelvin
    for (int i = 0; i <= n; i++) {
        *(TC + i) = TCi + i * delta;
        *(TK + i) = *(TC + i) + 273.15;
        printf("Celsius: %f, Kelvin: %f\n", *(TC + i), *(TK + i));
    }
	// Libera la memoria dinámica
    free(TC);
    free(TK);
}

int main() {
    convertirTemperaturas();  // Llamada a la función sin argumentos
    return 0;
}

