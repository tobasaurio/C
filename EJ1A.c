#include <stdio.h>
#include <stdlib.h>

int main(){
    float x=3.5, y=4.7, z, w, q;
    int verdadero, falso, n=0, nose;
    w =(int)(x+y);
    q =(int)x + (int)y;
    verdadero = 10 > x;
    falso = y < x;
    nose = sizeof(int) == sizeof n;
    z = x * (y = n++),
    x = 'A' + n;
    printf("%10.2f \n",w);
    printf("%10.2f\n",q);
    printf("%10.2f\n",z);
    printf("%10.2f\n",x);
    return 0;
}
