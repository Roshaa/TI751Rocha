#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,c1,r,a1;

    printf("Ol� eu calculo teoremas de pit�goras\n");
    printf("Introduza o 1� cateto\n")
    scanf("%f",&c);

    printf("Introduza o 2� cateto\n")
    scanf("%f",&c1);

    a=c*c;
    b=c1*c1;
    a1=a+b;
    r= sqrt(a1);

    printf("A Hipotenusa mede %f",r)


    return 0;
}
