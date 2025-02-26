/* programacion de algoritmos con lenhuaje binario febreo 26 del 2025 */

#include <stdio.h>
#include <stdio.h>

         int main(){
             int numero, residuo; //entrada de numero residuo 
            
             printf("¿que numero quieres saber si es par o impar?\n");
             scanf("%b", &numero);
             scanf("%b", &residuo);
             
             //verifica si el numero es par o impar 
             if(numero % 2 == 0) {
                printf("el numero %b es par.\n",numero);
            }else{
               printf("el numero %b es impar.\n",numero);
               }
                        
                        return(0);
}
