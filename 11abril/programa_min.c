#include <stdio.h>

	int main() {
		int n;
		double k, x, F, sum_xi_Fi = 0, sum_xi2 = 0;
		
		printf("Ingrese el número de puntos de datos: ");
		scanf("%d", &n);
		
		for (int i = 0; i < n; i++) {
		
		printf("Ingrese la deformación del resorte (x) en metros para el punto %d: \n", i + 1);
		scanf("%lf", &x);
		
		printf("Ingrese la fuerza final (F) en N para el punto %d: ", i + 1);
		scanf("%lf", &F);
		//mínimos cuadrados
		sum_xi_Fi += x * F;
		sum_xi2 += x * x;
		}
		// Calcular la constante del resorte k usando la fórmula de mínimos cuadrados
		k = -sum_xi_Fi / sum_xi2;
		
		printf("\nLa constante del resorte estimada es: %.2lf N/m\n", k);

    return 0;
}

