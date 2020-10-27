#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,c1,r,a1,p,area;

    printf("Ola eu calculo teoremas de pitágoras\n");
    printf("Introduza o primeiro cateto\n");
    scanf("%f",&c);

    printf("Introduza o segundo cateto\n");
    scanf("%f",&c1);

    a=c*c;
    b=c1*c1;
    a1=a+b;
    r= sqrt(a1);

    printf("A Hipotenusa mede %.2f\n",r);

    p=(c+c1+r)/2;
    printf("O perimetro e  %.2f\n",p);
    area=sqrt(p*(p-c)*(p-r)*(p-c1));
    printf("A area do triangulo e %.2f\n",area);


    return 0;
}
