//funcion con argumentos de salida, pero sin argumentos de entrada
// devuelve datos por medio de punteros, es decir, usa argumentos de salida (como float *TC, float *TK), para llenar resultados.
// los valores de entrada (n, TCi, TCf) se piden dentro de la función, mientras que los resultados (los arreglos) se devuelven a main() a través de punteros pasados como argumento.


#include <stdio.h>
#include <stdlib.h>

// Función que solo usa argumentos de salida
void convertirTemperaturas(float **TC_ptr, float **TK_ptr, int *n_ptr) {
    float TCi, TCf;
    float delta;
    int n = 20;

    *n_ptr = n;  // Guardar n en variable externa

    printf("Ingresa el valor para TCi: \n");
    scanf("%f", &TCi);
    printf("Ingresa el valor para TCf: \n");
    scanf("%f", &TCf);

    // Reservar memoria
    *TC_ptr = (float *)malloc((n + 1) * sizeof(float));
    *TK_ptr = (float *)malloc((n + 1) * sizeof(float));

    if (*TC_ptr == NULL || *TK_ptr == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }

    delta = (TCf - TCi) / n;

    for (int i = 0; i <= n; i++) {
        (*TC_ptr)[i] = TCi + i * delta;
        (*TK_ptr)[i] = (*TC_ptr)[i] + 273.15;
    }
}

int main() {
    float *TC, *TK;
    int n;

    //función para generar temperaturas
    convertirTemperaturas(&TC, &TK, &n);

    // Mostrar resultados
    printf("La temperatura en kelvin es: (n = %d): \n", n);
    for (int i = 0; i <= n; i++) {
        printf("Celsius: %f, Kelvin: %f\n", TC[i], TK[i]);
    }

    free(TC);
    free(TK);

    return 0;
}
//Asigna memoria y guarda los punteros usando float **TC_ptr y float **TK_ptr (doble puntero = apuntador al apuntador)

