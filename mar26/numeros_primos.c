#include <stdio.h>

	int numero_primo(int num);
	int imprimir_primos(int inicio, int fin);  

	int main() {
		int inicial = 1, final = 50;
		int i = inicial;
		int intervalo;
		
		printf("ingresa un valor para el inervalo: ");
		scanf("%d", &intervalo);
		if (intervalo <= 0);
		
		while (i <= final) {
        	if (numero_primo(i)) {
            	printf("%d es primo\n", i);
        }
        	i++;  
    }
    		int total_primos = imprimir_primos(inicial, final);
    		printf("Total de números primos entre %d y %d es: %d\n", inicial, final, total_primos);

    return 0;
}
		int numero_primo(int num) {
		if (num < 2) return 0;
		int i = 2;
		while (i * i <= num) {
		if (num % i == 0) return 0;
       		 i++;
    }
    return 1;
}
		int imprimir_primos(int inicio, int fin) {
		int contador = 0; 
		int i = inicio;
		printf("Los números primos entre %d y %d son:\n", inicio, fin);
    		while (i <= fin) {
		if (numero_primo(i)) {
		printf("%d es primo\n", i);
		contador++;  
        }
		i++;  
    }

		return contador;  
}
