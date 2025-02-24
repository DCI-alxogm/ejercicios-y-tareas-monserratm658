/* Ejercicio del 19 de febrero.
escrito el 24 de febrero*/

#include <stdio.h>
#include <math.h>

int main (){
          float x,y,z;  //entrada de coordenadas cartesianas 
          float r,theta,phi; //cooordenadas esfericas de salida
          float rc, theta_c, zc; //coordenadas cilindricas de salida
          
          printf("dame el resultado de la operacion a coordenadas esfericas\n");
          scanf("%f",&x);
          scanf("%f",&y);
          scanf("%f",&z);
          
          //conversion a coordenadas esfericas
          r = sqrt(x*x+y*y+z*z);
          theta = atan(y/x);
          phi = acos(z/r);
          
          //conversion a coordenadas cilindricas
          rc = sqrt(x*x+y*y);
          theta_c = atan(y/x);
          zc = z;
          
          //imprimir resultados 
          printf(" coordenadas esfericas r=%f , theta=%f , phi = %f \n" , r, theta, phi); 
          printf(" coordenadas cilindricas rc=%f , theta_c =%f , zc=%f \n" , rc, theta_c, zc);
          //  exit(θ);
     
          
}
