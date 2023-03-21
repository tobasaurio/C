#include <stdio.h>
void main(){
    int x=0, cuad=0, cubo=0;
    printf("X\t cuad(x)\t cubo(x)\n");

    while(x<=10)
    {
        cuad=x*x, cubo=x*x*x;
        printf("%4d\t %4d\t %4d\n", x, cuad, cubo);
        ++x;
    }
    printf("\n ---------------------\n \n");
    x=cubo=cuad=0;
    do{
       cuad=x*x, cubo=x*x*x;
       printf("%4d\t %4d\t %4d\n", x, cuad, cubo);
       ++x;
    }while(x<=10);


}
