#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,c1,r,a1;

    printf("Olá eu calculo teoremas de pitágoras\n");
    printf("Introduza o 1º cateto\n")
    scanf("%f",&c);

    printf("Introduza o 2º cateto\n")
    scanf("%f",&c1);

    a=c*c;
    b=c1*c1;
    a1=a+b;
    r= sqrt(a1);

    printf("A Hipotenusa mede %f",r)


    return 0;
}
