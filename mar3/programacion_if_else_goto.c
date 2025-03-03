/* programacion con goto 3 de marzo del 2025*/
#include <string.h>
#include <stdio.h>
int main(){
        int numero, residuo;
        char opc[2];
        
 leernumero:
        printf("introduce un numero para saber si es par i impar\n");
        scanf("%i",&numero);
        residuo=numero%2;
        
        if (residuo==0){
            printf("el numero %i es par\n",numero);
        }else{
        printf("el numero %i es impar\n", numero);
        }
        printf("¿quieres revisar otro numero?\n");
        scanf("%s",opc);
        if (strcmp(opc,"si")==0){
           goto leernumero;
        }
        else if (strcmp(opc,"no")==0){
        printf("hasta la proxima\n"); 
        }else{
        printf("solo acepto si o no");
}
}
