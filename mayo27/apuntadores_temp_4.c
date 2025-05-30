//funcion que opera con variables independientes con argumentos de entrada y de salida 
//Recibe como entrada: float TCi, float delta, int i
//Devuelve como salida: float *TC, float *TK (por puntero)

#include <stdio.h>

// Función que calcula una sola temperatura y su equivalente en Kelvin
void calcularTemperatura(float TCi, float delta, int i, float *TC, float *TK) {
    *TC = TCi + i * delta;
    *TK = *TC + 273.15;
}

int main() {
    int n = 20;
    float TCi, TCf;
    float delta;
    float TC, TK;

    // Entrada de datos
    printf("Ingresa el valor para TCi: \n");
    scanf("%f", &TCi);
    printf("Ingresa el valor para TCf: \n");
    scanf("%f", &TCf);

    delta = (TCf - TCi) / n;

    printf("La temperatura en kelvin es: (n = %d): \n", n);

    // Ciclo que calcula una temperatura por iteración
    for (int i = 0; i <= n; i++) {
        calcularTemperatura(TCi, delta, i, &TC, &TK);
        printf("Celsius: %f, Kelvin: %f\n", TC, TK);
    }

    return 0;
}
//Se calcula una sola temperatura y su conversión a Kelvin.
//Se usa paso por referencia (float *TC, float *TK) como argumentos de salida.
