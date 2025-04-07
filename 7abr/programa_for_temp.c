#include <stdio.h>
	int main (){
		int n=20;
		float TCi, TCf;
		float TC[20], TK[20];
		float delta;
		printf("ingresa el valor para TCi: \n");
		scanf("%f", &TCi);
		printf("ingresa el valor para TCf: \n");
		scanf("%f", &TCf); 
		
		delta = (TCf - TCi) / n;
		printf("La temperatura en kelvin es: (n= %d): \n", n);
		for (int i=0; i<=n; i++){
			TC[i]= TCi+i* delta;
			TK[i]=TC[i] + 273.15;
			printf("celsius: %f, kelvin: %f\n", TC[i], TK[i]);
	}
	return 0;	
}

