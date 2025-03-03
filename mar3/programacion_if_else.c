/* programacion con goto 3 de marzo del 2025*/
#include <string.h>
#include <stdio.h>
int main(){
        int numero, residuo;
        int opc;
        
 leernumero:
        printf("introduce un numero para saber si es par o impar\n");
        scanf("%i",&numero);
        residuo=numero%2;
        
        if (residuo==0){
            printf("el numero %i es par\n",numero);
        }else{
        printf("el numero %i es impar\n", numero);
        }
        printf("¿quieres revisar otro numero?\n Teclea 1=si \n 0=no \n");
        scanf("%i", &opc);
        if (opc==1){
           goto leernumero;
        }
        else{
        printf("thank you next \n");
}
}
