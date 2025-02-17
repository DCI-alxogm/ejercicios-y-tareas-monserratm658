/* programa 17 de febrero: jerarquia de operaciones con flotantes*/

#include <stdio.h>

int main(){
        float a,b,c,d;
        float e1,e2,e3,e4;
        a=3;
        b=9;
        c=1;
        d=6;
        e1=(a+b)*c/d;
        e2=((a+b)*c)/d;
        e3=(a+b)*(c/d);
        e4=a+b*c/d;
        printf("e=(a+b)*c/d=%f\n",e1);
        printf("e=((a+b)*c)/d=%f\n",e2);
        printf("e=(a+b)*(c/d)=%f\n",e3);
        printf("e=a+b*c/d=%f\n",e4);
}
