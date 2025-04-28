#include <stdio.h>
 
int main() {
    float q1, q2, r, F;
    const float k = 9e9; 
 
    printf("Calcular de fuerza electrica (Ley de Coulomb)\n\n");
 
    printf("inserta la carga 1 (q1) en Coulombs: ");
    scanf("%f", &q1);
 
    printf("inserta la carga 2 (q2) en Coulombs: ");
    scanf("%f", &q2);
 
    printf("inserta la distancia entre cargas (r) en metros: ");
    scanf("%f", &r);
 
    F = k * q1 * q2 / (r * r);
 
    printf("\nLa fuerza electrica entre las cargas es: %.2e Newtons\n", F);
 
    return 0;
}
