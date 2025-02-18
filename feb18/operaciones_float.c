/* programa 18 de febrero: operaciones desde la terminal con operaciones flotantes por Monse Martinez */


#include <stdio.h>
int main(){
        float a,b,c,d;
        float e1,e2,e3,e4;
        a=9;
        b=8;
        c=4;
        d=9;
        e1=(a+b+c)*-c/d;
        e2=((a+b)*c)/d;
        e3=(a+b*a)*(c/d);
        e4=a+b*c/d+c;
        printf("e=(a+b)*c/d=%f\n",e1);
        printf("e=((a+b)*c)/d=%f\n",e2);
        printf("e=(a+b)*(c/d)=%f\n",e3);
        printf("e=a+b*c/d=%f\n",e4);
}
