/* creado el 10 de marzo 2025*/

#include<stdio.h>
#include<stdio.h>
int main(){

	char op;
	float TK,TC;
	
	printf("selecciona una opcion c o k\n");
	scanf(" %s", &op);
	
	switch(op){
		case 'k':
		printf("convierte la TC a TK \n");
		scanf("%f", &TC);  //lee TC,	
                 TK= TC+273.15;     //realiza la operacion
                 printf("la T EN TK ES: %f  \n", TK);
                 break;
                case 'c':
                printf("convierte la TK a TC \n");
                scanf("%f", &TK);  //lee TC,
                 TC= TK-273.15;     //realiza la operacion
                 printf("la T EN TC ES: %f  \n", TC);
                 break;
                 default:
                 printf("opcion no econtrada");
                 }
 	return(0);
        }

