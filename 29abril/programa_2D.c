#include <stdio.h>

int main() {
    int nx, ny;
    double delta;

    printf("Ingrese el número de puntos en X: ");
    scanf("%d", &nx);

    printf("Ingrese el número de puntos en Y: ");
    scanf("%d", &ny);

    printf("Ingrese la distancia entre puntos (delta): ");
    scanf("%lf", &delta);

    //retícula de puntos
    printf("\nCoordenadas generadas:\n");

    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            double x = i * delta;
            double y = j * delta;
            printf("(%.2lf, %.2lf)\n", x, y);
        }
    }

    return 0;
}

