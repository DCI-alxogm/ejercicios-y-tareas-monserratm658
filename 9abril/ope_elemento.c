#include <stdlib.h>
#include <stdio.h>

int main() {
    int i, n = 20;
    float TC[n], TK[n];

    printf("Ingresa %d temperaturas en Celsius:\n", n);
    
    for (i = 0; i < n; i++) {
        printf("Temperatura #%d: ", i +1);
        scanf("%f", &TC[i]);
    }

    for (i = 0; i < n; i++) {
        TK[i] = TC[i] + 273.15;
    }

    printf("Temperaturas convertidas:\n");
    for (i = 0; i < n; i++) {
    	printf("TC[%d] = %.2f °C, TK[%d] = %.2f K\n", i, TC[i], i, TK[i]);
    }

    return 0;
}

		
