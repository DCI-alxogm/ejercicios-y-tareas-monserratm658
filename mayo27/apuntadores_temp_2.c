//funcion con argumentos de entrada pero sin argumentos de salida, void no devuelve ningun valor 
//La función recibirá argumentos Y realizará todo dentro de esa función, igual que antes, pero ahora n, TCi y TCf serán pasados desde main.

#include <stdio.h>
#include <stdlib.h>

// Función con argumentos de entrada
void convertirTemperaturas(int n, float TCi, float TCf) {
    float *TC, *TK;
    float delta;

    // Asignación dinámica de memoria
    TC = (float *)malloc((n + 1) * sizeof(float));
    TK = (float *)malloc((n + 1) * sizeof(float));

    if (TC == NULL || TK == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }

    delta = (TCf - TCi) / n;

    printf("La temperatura en kelvin es: (n = %d): \n", n);

    for (int i = 0; i <= n; i++) {
        *(TC + i) = TCi + i * delta;
        *(TK + i) = *(TC + i) + 273.15;
        printf("Celsius: %f, Kelvin: %f\n", *(TC + i), *(TK + i));
    }

    free(TC);
    free(TK);
}

int main() {
    int n = 20;
    float TCi, TCf;

    printf("Ingresa el valor para TCi: \n");
    scanf("%f", &TCi);
    printf("Ingresa el valor para TCf: \n");
    scanf("%f", &TCf);

    //la función con argumentos
    convertirTemperaturas(n, TCi, TCf);

    return 0;
} //No se devuelve nada, los resultados se imprimen directamente.
